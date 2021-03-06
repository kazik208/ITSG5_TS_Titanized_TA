// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/5 R3A
// for Lenard Nagy (elnrnag@elx1pjld12-hz) on Tue Nov  3 08:54:32 2015

// Copyright Ericsson Telecom AB 2000-2014

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "AdapterControlPort.hh"

namespace LibItsGeoNetworking__TestSystem {

  AdapterControlPort::AdapterControlPort(const char *par_port_name)
    : AdapterControlPort_BASE(par_port_name)
  {

  }

  AdapterControlPort::~AdapterControlPort()
  {

  }

  void AdapterControlPort::set_parameter(const char * parameter_name,
					 const char * parameter_value)
  {
    TRI_set_param(parameter_name,parameter_value,mp_data);
  }

  /*void AdapterControlPort::Handle_Fd_Event(int fd, boolean is_readable,
    boolean is_writable, boolean is_error) {}*/

  void AdapterControlPort::Handle_Fd_Event_Error(int fd)
  {
    Handle_Fd_Event_Readable(fd);
  }

  void AdapterControlPort::Handle_Fd_Event_Writable(int /*fd*/)
  {

  }

  void AdapterControlPort::Handle_Fd_Event_Readable(int fd)
  {
    int res=TRI__interface__Types::TRI_read_socket(fd,mp_data.buff);
 
    if(res<=0){
      TTCN_error("TRI_Mapper connection lost");
    }
 
    TRI__interface__Types::TRI__mapper__PDU pdu;
 
    while(TRI__interface__Types::TRI_get_message(mp_data.buff,pdu)){
      switch(pdu.msg().get_selection()){
      case TRI__interface__Types::Msg__union::ALT_enqueue__msg:{
	/**** ****/
	// put the decoder here
	const OCTETSTRING tmp=(const OCTETSTRING)pdu.msg().enqueue__msg().data().encoded__data();
	const unsigned char* tmp1 = (const unsigned char*)tmp;
	if (tmp1[0] == 0x00) { //AcGnResponse
	    //Subtract header
	  if (tmp1[1] == 0x00) { //AcGnResponseFailure
	    LibItsGeoNetworking__TypesAndValues::AcGnResponse ret_val;
	    ret_val.failure().failure() = *tmp1;
	    incoming_message(ret_val);
	  } else if (tmp1[1] == 0x06) { //getLongPosVector
	    LibItsGeoNetworking__TypesAndValues::AcGnResponse ret_val;
	    ret_val.getLongPosVector() = TTCN__EncDec::f__dec__LongPosVector(OCTETSTRING(tmp.lengthof()-2,tmp1+2));
	    incoming_message(ret_val);
	  } else {
	    TTCN_error("Invalid AcGnResponse message");
	  }
	} else if (tmp1[0] == 0x01) { //AcGn6Response
	  TTCN_Logger::begin_event(TTCN_DEBUG);
	  TTCN_Logger::log_event_str("*** AcGn6Response dropped, not yet implemented in TA ***");
	  TTCN_Logger::end_event();
	} else {
	  TTCN_error("Invalid message received in AdapterControlPort");
	}
	/**** ****/
      } break;
      case TRI__interface__Types::Msg__union::ALT_result:
	if(pdu.msg().result().result()==TRI__interface__Types::Result__value::TRI__error){
	  TTCN_error("Unsucessfull send");
	}
	break;
      default:
	TTCN_error("Unexpected message");
	break;
      }
    }
  }


  /*void AdapterControlPort::Handle_Timeout(double time_since_last_call) {}*/

  void AdapterControlPort::user_map(const char * system_port)
  {
    TRI_map("ACPort",system_port,mp_data);
    Handler_Add_Fd_Read(mp_data.tri_socket);
  }

  void AdapterControlPort::user_unmap(const char * system_port)
  {
    TRI_unmap(mp_data);
    Uninstall_Handler();
  }

  void AdapterControlPort::user_start()
  {
    TRI_start("ACPort",get_name(),(component)self,COMPONENT::get_component_name(self),mp_data);
  }

  void AdapterControlPort::user_stop()
  {
    TRI_stop(mp_data);
  }

  void AdapterControlPort::outgoing_send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive& send_par)
  {
        TRI__interface__Types::TRI__mapper__PDU pdu;
    
    /**** ****/
    // put the encoder here
    TTCN_Buffer sb;
    
    unsigned int msg_type = 0x00;
    sb.put_c(msg_type);
        
    unsigned int header = 0xFF;
    
    switch(send_par.get_selection()){
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_startBeaconing:{
	header = 0x00;
	sb.put_c(header);
	TTCN_Logger::begin_event(TTCN_DEBUG);
	send_par.startBeaconing().beaconPacket().log();
	TTCN_Logger::end_event();
    	OCTETSTRING beaconPacket = TTCN__EncDec::f__enc__GeoNetworkingPdu(send_par.startBeaconing().beaconPacket());
	sb.put_os(beaconPacket);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_stopBeaconing:{
	header = 0x01;
	sb.put_c(header);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_startPassBeaconing:{
	header = 0x02;
	sb.put_c(header);
	OCTETSTRING beaconHeader = TTCN__EncDec::f__enc__BeaconHeader(send_par.startPassBeaconing().beaconHeader());
	sb.put_os(beaconHeader);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_stopPassBeaconing:{
	header = 0x03;
	sb.put_c(header);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_startBeaconingMultipleNeighbour:{
	header = 0x04;
	sb.put_c(header);
	OCTETSTRING beaconPacket = TTCN__EncDec::f__enc__GeoNetworkingPdu(send_par.startBeaconingMultipleNeighbour().beaconPacket());
	sb.put_os(beaconPacket);

	unsigned int number_of_neighbour = send_par.startBeaconingMultipleNeighbour().numberOfNeighbour();
	sb.put_c( (number_of_neighbour>>8) & 0xFF );
	sb.put_c( (number_of_neighbour) & 0xFF );
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_stopBeaconingMultipleNeighbour:{
	header = 0x05;
	sb.put_c(header);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_getLongPosVector:{
	header = 0x06;
	sb.put_c(header);
	OCTETSTRING beaconPacket = TTCN__EncDec::f__enc__GN__Address(send_par.getLongPosVector().gnAddress());
	sb.put_os(beaconPacket);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_acEnableSecurity:{
	header = 0x07;
	sb.put_c(header);
      } break;
      case LibItsGeoNetworking__TypesAndValues::AcGnPrimitive::ALT_acDisableSecurity:{
	header = 0x08;
	sb.put_c(header);   
      } break;
    default:
       TTCN_error("Unexpected message");
      break;

    }
    /**** ****/

    sb.get_string(pdu.msg().sendmsg().data().encoded__data());
    pdu.msg().sendmsg().addr()=OMIT_VALUE;
 
    pdu.msg__id()=mp_data.msg_seq_num;
    mp_data.msg_seq_num++;
 
    TRI__interface__Types::TRI_send(mp_data.tri_socket,pdu);
  }

  void AdapterControlPort::outgoing_send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive& send_par)
  {
    //Not implemented yet in TA
    TTCN_Logger::begin_event(TTCN_DEBUG);
    TTCN_Logger::log_event_str("*** AcGn6Primitive not implemented yet in TA  ***");
    TTCN_Logger::end_event();
  }

} /* end of namespace */

