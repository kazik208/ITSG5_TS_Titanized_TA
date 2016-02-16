// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for Aitor (aitorkun@aitorkun-HP-EliteBook-2530p) on Tue Feb 16 10:46:43 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef LibItsGeoNetworking__TestSystem_HH
#define LibItsGeoNetworking__TestSystem_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include "LibItsCommon_TestSystem.hh"
#include "LibItsGeoNetworking_TypesAndValues.hh"
#include "LibItsSecurity_TestSystem.hh"
#include "General_Types.hh"
#include "TTCN_EncDec.hh"

#if TTCN3_VERSION != 50400
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

#undef LibItsGeoNetworking__TestSystem_HH
#endif

namespace LibItsGeoNetworking__TestSystem {

/* Forward declarations of classes */

class AdapterControlPort_BASE;
class AdapterControlPort;
class UpperTesterGNPort_BASE;
class UpperTesterGNPort;
class GeoNetworkingPort_BASE;
class GeoNetworkingPort;
class ComponentTable;
class ComponentTable_template;
class ComponentEntry;
class ComponentEntry_template;
class GeoNetworkingInd;
class GeoNetworkingInd_template;
class GeoNetworkingReq;
class GeoNetworkingReq_template;

} /* end of namespace */

#ifndef LibItsGeoNetworking__TestSystem_HH
#define LibItsGeoNetworking__TestSystem_HH

namespace LibItsGeoNetworking__TestSystem {

/* Type definitions */

typedef COMPONENT ItsMtc;
typedef COMPONENT_template ItsMtc_template;
typedef COMPONENT ItsGeoNetworking;
typedef COMPONENT_template ItsGeoNetworking_template;
typedef COMPONENT ItsGeoNetworkingSystem;
typedef COMPONENT_template ItsGeoNetworkingSystem_template;
typedef COMPONENT ItsBaseGeoNetworking;
typedef COMPONENT_template ItsBaseGeoNetworking_template;

/* Class definitions */

class AdapterControlPort_BASE : public PORT {
enum msg_selection { MESSAGE_0, MESSAGE_1 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
LibItsGeoNetworking__TypesAndValues::AcGnResponse *message_0;
LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response *message_1;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
AdapterControlPort_BASE(const char *par_port_name);
~AdapterControlPort_BASE();
void send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive& send_par, const COMPONENT& destination_component);
void send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive& send_par);
void send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive_template& send_par, const COMPONENT& destination_component);
void send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive_template& send_par);
void send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive& send_par, const COMPONENT& destination_component);
void send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive& send_par);
void send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive_template& send_par, const COMPONENT& destination_component);
void send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive_template& send_par);
protected:
virtual void outgoing_send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive& send_par) = 0;
virtual void outgoing_send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive& send_par) = 0;
public:
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsGeoNetworking__TypesAndValues::AcGnResponse_template& value_template, LibItsGeoNetworking__TypesAndValues::AcGnResponse *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsGeoNetworking__TypesAndValues::AcGnResponse_template& value_template, LibItsGeoNetworking__TypesAndValues::AcGnResponse *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsGeoNetworking__TypesAndValues::AcGnResponse_template& value_template, LibItsGeoNetworking__TypesAndValues::AcGnResponse *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response_template& value_template, LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response_template& value_template, LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response_template& value_template, LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
private:
void incoming_message(const LibItsGeoNetworking__TypesAndValues::AcGnResponse& incoming_par, component sender_component);
void incoming_message(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response& incoming_par, component sender_component);
protected:
inline void incoming_message(const LibItsGeoNetworking__TypesAndValues::AcGnResponse& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
inline void incoming_message(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Response& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};

class UpperTesterGNPort_BASE : public PORT {
enum msg_selection { MESSAGE_0, MESSAGE_1, MESSAGE_2, MESSAGE_3 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
LibItsCommon__TypesAndValues::UtInitializeResult *message_0;
LibItsCommon__TypesAndValues::UtChangePositionResult *message_1;
LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult *message_2;
LibItsGeoNetworking__TypesAndValues::UtGnEventInd *message_3;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
UpperTesterGNPort_BASE(const char *par_port_name);
~UpperTesterGNPort_BASE();
void send(const LibItsCommon__TypesAndValues::UtInitialize& send_par, const COMPONENT& destination_component);
void send(const LibItsCommon__TypesAndValues::UtInitialize& send_par);
void send(const LibItsCommon__TypesAndValues::UtInitialize_template& send_par, const COMPONENT& destination_component);
void send(const LibItsCommon__TypesAndValues::UtInitialize_template& send_par);
void send(const LibItsCommon__TypesAndValues::UtChangePosition& send_par, const COMPONENT& destination_component);
void send(const LibItsCommon__TypesAndValues::UtChangePosition& send_par);
void send(const LibItsCommon__TypesAndValues::UtChangePosition_template& send_par, const COMPONENT& destination_component);
void send(const LibItsCommon__TypesAndValues::UtChangePosition_template& send_par);
void send(const LibItsGeoNetworking__TypesAndValues::UtGnTrigger& send_par, const COMPONENT& destination_component);
void send(const LibItsGeoNetworking__TypesAndValues::UtGnTrigger& send_par);
void send(const LibItsGeoNetworking__TypesAndValues::UtGnTrigger_template& send_par, const COMPONENT& destination_component);
void send(const LibItsGeoNetworking__TypesAndValues::UtGnTrigger_template& send_par);
protected:
virtual void outgoing_send(const LibItsCommon__TypesAndValues::UtInitialize& send_par) = 0;
virtual void outgoing_send(const LibItsCommon__TypesAndValues::UtChangePosition& send_par) = 0;
virtual void outgoing_send(const LibItsGeoNetworking__TypesAndValues::UtGnTrigger& send_par) = 0;
public:
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsCommon__TypesAndValues::UtInitializeResult_template& value_template, LibItsCommon__TypesAndValues::UtInitializeResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsCommon__TypesAndValues::UtInitializeResult_template& value_template, LibItsCommon__TypesAndValues::UtInitializeResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsCommon__TypesAndValues::UtInitializeResult_template& value_template, LibItsCommon__TypesAndValues::UtInitializeResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsCommon__TypesAndValues::UtChangePositionResult_template& value_template, LibItsCommon__TypesAndValues::UtChangePositionResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsCommon__TypesAndValues::UtChangePositionResult_template& value_template, LibItsCommon__TypesAndValues::UtChangePositionResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsCommon__TypesAndValues::UtChangePositionResult_template& value_template, LibItsCommon__TypesAndValues::UtChangePositionResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const LibItsGeoNetworking__TypesAndValues::UtGnEventInd_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnEventInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const LibItsGeoNetworking__TypesAndValues::UtGnEventInd_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnEventInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const LibItsGeoNetworking__TypesAndValues::UtGnEventInd_template& value_template, LibItsGeoNetworking__TypesAndValues::UtGnEventInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
private:
void incoming_message(const LibItsCommon__TypesAndValues::UtInitializeResult& incoming_par, component sender_component);
void incoming_message(const LibItsCommon__TypesAndValues::UtChangePositionResult& incoming_par, component sender_component);
void incoming_message(const LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult& incoming_par, component sender_component);
void incoming_message(const LibItsGeoNetworking__TypesAndValues::UtGnEventInd& incoming_par, component sender_component);
protected:
inline void incoming_message(const LibItsCommon__TypesAndValues::UtInitializeResult& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
inline void incoming_message(const LibItsCommon__TypesAndValues::UtChangePositionResult& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
inline void incoming_message(const LibItsGeoNetworking__TypesAndValues::UtGnTriggerResult& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
inline void incoming_message(const LibItsGeoNetworking__TypesAndValues::UtGnEventInd& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};

class GeoNetworkingPort_BASE : public PORT {
enum msg_selection { MESSAGE_0 };
struct msg_queue_item : public msg_queue_item_base {
msg_selection item_selection;
union {
GeoNetworkingInd *message_0;
};
component sender_component;
};

void remove_msg_queue_head();
protected:
void clear_queue();
public:
GeoNetworkingPort_BASE(const char *par_port_name);
~GeoNetworkingPort_BASE();
void send(const GeoNetworkingReq& send_par, const COMPONENT& destination_component);
void send(const GeoNetworkingReq& send_par);
void send(const GeoNetworkingReq_template& send_par, const COMPONENT& destination_component);
void send(const GeoNetworkingReq_template& send_par);
protected:
virtual void outgoing_send(const GeoNetworkingReq& send_par) = 0;
public:
alt_status receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status receive(const GeoNetworkingInd_template& value_template, GeoNetworkingInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status check_receive(const GeoNetworkingInd_template& value_template, GeoNetworkingInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
alt_status trigger(const GeoNetworkingInd_template& value_template, GeoNetworkingInd *value_ptr, const COMPONENT_template& sender_template, COMPONENT *sender_ptr);
private:
void incoming_message(const GeoNetworkingInd& incoming_par, component sender_component);
protected:
inline void incoming_message(const GeoNetworkingInd& incoming_par) { incoming_message(incoming_par, SYSTEM_COMPREF); }
boolean process_message(const char *message_type, Text_Buf& incoming_buf, component sender_component, OCTETSTRING& slider);
};

class ComponentTable : public Base_Type {
struct recordof_setof_struct {
int ref_count;
int n_elements;
ComponentEntry **value_elements;
} *val_ptr;

static const ComponentEntry UNBOUND_ELEM;
private:
friend boolean operator==(null_type null_value, const ComponentTable& other_value);

public:
  typedef ComponentEntry of_type;
ComponentTable();
ComponentTable(null_type other_value);
ComponentTable(const ComponentTable& other_value);
~ComponentTable();

void clean_up();
ComponentTable& operator=(null_type other_value);
ComponentTable& operator=(const ComponentTable& other_value);

boolean operator==(null_type other_value) const;
boolean operator==(const ComponentTable& other_value) const;
inline boolean operator!=(null_type other_value) const { return !(*this == other_value); }
inline boolean operator!=(const ComponentTable& other_value) const { return !(*this == other_value); }

ComponentEntry& operator[](int index_value);
ComponentEntry& operator[](const INTEGER& index_value);
const ComponentEntry& operator[](int index_value) const;
const ComponentEntry& operator[](const INTEGER& index_value) const;

ComponentTable operator<<=(int rotate_count) const;
ComponentTable operator<<=(const INTEGER& rotate_count) const;
ComponentTable operator>>=(int rotate_count) const;
ComponentTable operator>>=(const INTEGER& rotate_count) const;

ComponentTable operator+(const ComponentTable& other_value) const;

ComponentTable substr(int index, int returncount) const;

ComponentTable replace(int index, int len, const ComponentTable& repl) const;

ComponentTable replace(int index, int len, const ComponentTable_template& repl) const;

void set_size(int new_size);
inline boolean is_bound() const {return val_ptr != NULL; }
inline boolean is_present() const { return is_bound(); }
boolean is_value() const;
int size_of() const;
int n_elem() const { return size_of(); }
int lengthof() const;
void log() const;
void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
  void set_implicit_omit();
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int RAW_encode(const TTCN_Typedescriptor_t&, RAW_enc_tree&) const;
int RAW_decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, int, raw_order_t, boolean no_err=FALSE,int sel_field=-1, boolean first_call=TRUE);
};

class ComponentTable_template : public Record_Of_Template {
union {
struct {
int n_elements;
ComponentEntry_template **value_elements;
} single_value;
struct {
unsigned int n_values;
ComponentTable_template *list_value;
} value_list;
};
void copy_value(const ComponentTable& other_value);
void copy_template(const ComponentTable_template& other_value);
static boolean match_function_specific(const Base_Type *value_ptr, int value_index, const Restricted_Length_Template *template_ptr, int template_index, boolean legacy);

public:
ComponentTable_template();
ComponentTable_template(template_sel other_value);
ComponentTable_template(null_type other_value);
ComponentTable_template(const ComponentTable& other_value);
ComponentTable_template(const OPTIONAL<ComponentTable>& other_value);
ComponentTable_template(const ComponentTable_template& other_value);
~ComponentTable_template();

void clean_up();
ComponentTable_template& operator=(template_sel other_value);
ComponentTable_template& operator=(null_type other_value);
ComponentTable_template& operator=(const ComponentTable& other_value);
ComponentTable_template& operator=(const OPTIONAL<ComponentTable>& other_value);
ComponentTable_template& operator=(const ComponentTable_template& other_value);

ComponentEntry_template& operator[](int index_value);
ComponentEntry_template& operator[](const INTEGER& index_value);
const ComponentEntry_template& operator[](int index_value) const;
const ComponentEntry_template& operator[](const INTEGER& index_value) const;

void set_size(int new_size);
int n_elem() const;
int size_of(boolean is_size) const;
inline int size_of() const { return size_of(TRUE); }
inline int lengthof() const { return size_of(FALSE); }
boolean match(const ComponentTable& other_value, boolean legacy = FALSE) const;
inline boolean is_bound() const 
  {return template_selection != UNINITIALIZED_TEMPLATE; }
boolean is_value() const;
ComponentTable valueof() const;
ComponentTable substr(int index, int returncount) const;

ComponentTable replace(int index, int len, const ComponentTable_template& repl) const;

ComponentTable replace(int index, int len, const ComponentTable& repl) const;

void set_type(template_sel template_type, unsigned int list_length);
ComponentTable_template& list_item(unsigned int list_index);
void log() const;
void log_match(const ComponentTable& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
};

class ComponentEntry : public Base_Type {
  CHARSTRING field_componentName;
  OPTIONAL<COMPONENT> field_gnComponent;
  boolean bound_flag;
public:
  ComponentEntry();
  ComponentEntry(const CHARSTRING& par_componentName,
    const OPTIONAL<COMPONENT>& par_gnComponent);
  ComponentEntry(const ComponentEntry& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
  ComponentEntry& operator=(const ComponentEntry& other_value);
  boolean operator==(const ComponentEntry& other_value) const;
  inline boolean operator!=(const ComponentEntry& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline CHARSTRING& componentName()
    {return field_componentName;}
  inline const CHARSTRING& componentName() const
    {return field_componentName;}
  inline OPTIONAL<COMPONENT>& gnComponent()
    {return field_gnComponent;}
  inline const OPTIONAL<COMPONENT>& gnComponent() const
    {return field_gnComponent;}
  int size_of() const;
  void log() const;
  void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int RAW_encode(const TTCN_Typedescriptor_t&, RAW_enc_tree&) const;
int RAW_decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, int, raw_order_t, boolean no_err=FALSE,int sel_field=-1, boolean first_call=TRUE);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean);
};

class ComponentEntry_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
ComponentEntry_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const ComponentEntry& other_value);
void copy_template(const ComponentEntry_template& other_value);

public:
ComponentEntry_template();
ComponentEntry_template(template_sel other_value);
ComponentEntry_template(const ComponentEntry& other_value);
ComponentEntry_template(const OPTIONAL<ComponentEntry>& other_value);
ComponentEntry_template(const ComponentEntry_template& other_value);
~ComponentEntry_template();
ComponentEntry_template& operator=(template_sel other_value);
ComponentEntry_template& operator=(const ComponentEntry& other_value);
ComponentEntry_template& operator=(const OPTIONAL<ComponentEntry>& other_value);
ComponentEntry_template& operator=(const ComponentEntry_template& other_value);
boolean match(const ComponentEntry& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
ComponentEntry valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
ComponentEntry_template& list_item(unsigned int list_index) const;
CHARSTRING_template& componentName();
const CHARSTRING_template& componentName() const;
COMPONENT_template& gnComponent();
const COMPONENT_template& gnComponent() const;
int size_of() const;
void log() const;
void log_match(const ComponentEntry& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};

class GeoNetworkingInd : public Base_Type {
  LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu field_msgIn;
  OCTETSTRING field_macDestinationAddress;
  boolean bound_flag;
public:
  GeoNetworkingInd();
  GeoNetworkingInd(const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& par_msgIn,
    const OCTETSTRING& par_macDestinationAddress);
  GeoNetworkingInd(const GeoNetworkingInd& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
  GeoNetworkingInd& operator=(const GeoNetworkingInd& other_value);
  boolean operator==(const GeoNetworkingInd& other_value) const;
  inline boolean operator!=(const GeoNetworkingInd& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& msgIn()
    {return field_msgIn;}
  inline const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& msgIn() const
    {return field_msgIn;}
  inline OCTETSTRING& macDestinationAddress()
    {return field_macDestinationAddress;}
  inline const OCTETSTRING& macDestinationAddress() const
    {return field_macDestinationAddress;}
  int size_of() const;
  void log() const;
  void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int RAW_encode(const TTCN_Typedescriptor_t&, RAW_enc_tree&) const;
int RAW_decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, int, raw_order_t, boolean no_err=FALSE,int sel_field=-1, boolean first_call=TRUE);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean);
};

class GeoNetworkingInd_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
GeoNetworkingInd_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const GeoNetworkingInd& other_value);
void copy_template(const GeoNetworkingInd_template& other_value);

public:
GeoNetworkingInd_template();
GeoNetworkingInd_template(template_sel other_value);
GeoNetworkingInd_template(const GeoNetworkingInd& other_value);
GeoNetworkingInd_template(const OPTIONAL<GeoNetworkingInd>& other_value);
GeoNetworkingInd_template(const GeoNetworkingInd_template& other_value);
~GeoNetworkingInd_template();
GeoNetworkingInd_template& operator=(template_sel other_value);
GeoNetworkingInd_template& operator=(const GeoNetworkingInd& other_value);
GeoNetworkingInd_template& operator=(const OPTIONAL<GeoNetworkingInd>& other_value);
GeoNetworkingInd_template& operator=(const GeoNetworkingInd_template& other_value);
boolean match(const GeoNetworkingInd& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
GeoNetworkingInd valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
GeoNetworkingInd_template& list_item(unsigned int list_index) const;
LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu_template& msgIn();
const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu_template& msgIn() const;
OCTETSTRING_template& macDestinationAddress();
const OCTETSTRING_template& macDestinationAddress() const;
int size_of() const;
void log() const;
void log_match(const GeoNetworkingInd& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};

class GeoNetworkingReq : public Base_Type {
  LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu field_msgOut;
  OCTETSTRING field_macDestinationAddress;
  boolean bound_flag;
public:
  GeoNetworkingReq();
  GeoNetworkingReq(const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& par_msgOut,
    const OCTETSTRING& par_macDestinationAddress);
  GeoNetworkingReq(const GeoNetworkingReq& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
  GeoNetworkingReq& operator=(const GeoNetworkingReq& other_value);
  boolean operator==(const GeoNetworkingReq& other_value) const;
  inline boolean operator!=(const GeoNetworkingReq& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& msgOut()
    {return field_msgOut;}
  inline const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu& msgOut() const
    {return field_msgOut;}
  inline OCTETSTRING& macDestinationAddress()
    {return field_macDestinationAddress;}
  inline const OCTETSTRING& macDestinationAddress() const
    {return field_macDestinationAddress;}
  int size_of() const;
  void log() const;
  void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int RAW_encode(const TTCN_Typedescriptor_t&, RAW_enc_tree&) const;
int RAW_decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, int, raw_order_t, boolean no_err=FALSE,int sel_field=-1, boolean first_call=TRUE);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean);
};

class GeoNetworkingReq_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
GeoNetworkingReq_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const GeoNetworkingReq& other_value);
void copy_template(const GeoNetworkingReq_template& other_value);

public:
GeoNetworkingReq_template();
GeoNetworkingReq_template(template_sel other_value);
GeoNetworkingReq_template(const GeoNetworkingReq& other_value);
GeoNetworkingReq_template(const OPTIONAL<GeoNetworkingReq>& other_value);
GeoNetworkingReq_template(const GeoNetworkingReq_template& other_value);
~GeoNetworkingReq_template();
GeoNetworkingReq_template& operator=(template_sel other_value);
GeoNetworkingReq_template& operator=(const GeoNetworkingReq& other_value);
GeoNetworkingReq_template& operator=(const OPTIONAL<GeoNetworkingReq>& other_value);
GeoNetworkingReq_template& operator=(const GeoNetworkingReq_template& other_value);
boolean match(const GeoNetworkingReq& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
GeoNetworkingReq valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
GeoNetworkingReq_template& list_item(unsigned int list_index) const;
LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu_template& msgOut();
const LibItsGeoNetworking__TypesAndValues::GeoNetworkingPdu_template& msgOut() const;
OCTETSTRING_template& macDestinationAddress();
const OCTETSTRING_template& macDestinationAddress() const;
int size_of() const;
void log() const;
void log_match(const GeoNetworkingReq& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
Module_Param* get_param(Module_Param_Name& param_name) const;
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};


/* Function prototypes */

extern boolean operator==(null_type null_value, const ComponentTable& other_value);
inline boolean operator!=(null_type null_value, const ComponentTable& other_value) { return !(null_value == other_value); }

/* Global variable declarations */

extern const TTCN_Typedescriptor_t& ItsMtc_descr_;
extern const TTCN_RAWdescriptor_t ComponentTable_raw_;
extern const TTCN_Typedescriptor_t ComponentTable_descr_;
extern const XERdescriptor_t ComponentEntry_componentName_xer_;
extern const TTCN_Typedescriptor_t ComponentEntry_componentName_descr_;
extern const TTCN_RAWdescriptor_t ComponentEntry_raw_;
extern const TTCN_JSONdescriptor_t ComponentEntry_json_;
extern const TTCN_Typedescriptor_t ComponentEntry_descr_;
extern const TTCN_Typedescriptor_t& ItsGeoNetworking_descr_;
extern ComponentTable ItsMtc_component_vc__componentTable;
extern const TTCN_Typedescriptor_t& ItsGeoNetworkingSystem_descr_;
extern UpperTesterGNPort ItsGeoNetworkingSystem_component_utPort;
extern AdapterControlPort ItsGeoNetworkingSystem_component_acPort;
extern GeoNetworkingPort ItsGeoNetworkingSystem_component_geoNetworkingPort;
extern const TTCN_Typedescriptor_t& ItsBaseGeoNetworking_descr_;
extern UpperTesterGNPort ItsBaseGeoNetworking_component_utPort;
extern AdapterControlPort ItsBaseGeoNetworking_component_acPort;
extern LibItsGeoNetworking__TypesAndValues::UtGnEventIndList ItsBaseGeoNetworking_component_vc__utInds;
extern GeoNetworkingPort ItsGeoNetworking_component_geoNetworkingPort;
extern INTEGER ItsGeoNetworking_component_vc__localSeqNumber;
extern LibItsGeoNetworking__TypesAndValues::PositionTable ItsGeoNetworking_component_vc__positionTable;
extern LibItsGeoNetworking__TypesAndValues::GeoAreaTable ItsGeoNetworking_component_vc__areaTable;
extern CHARSTRING ItsGeoNetworking_component_vc__componentName;
extern DEFAULT ItsGeoNetworking_component_vc__neighbourDefault;
extern INTEGER ItsGeoNetworking_component_vc__multipleMessagesCount;
extern const XERdescriptor_t GeoNetworkingInd_macDestinationAddress_xer_;
extern const TTCN_Typedescriptor_t GeoNetworkingInd_macDestinationAddress_descr_;
extern const TTCN_RAWdescriptor_t GeoNetworkingInd_raw_;
extern const TTCN_JSONdescriptor_t GeoNetworkingInd_json_;
extern const TTCN_Typedescriptor_t GeoNetworkingInd_descr_;
extern const XERdescriptor_t GeoNetworkingReq_macDestinationAddress_xer_;
extern const TTCN_Typedescriptor_t GeoNetworkingReq_macDestinationAddress_descr_;
extern const TTCN_RAWdescriptor_t GeoNetworkingReq_raw_;
extern const TTCN_JSONdescriptor_t GeoNetworkingReq_json_;
extern const TTCN_Typedescriptor_t GeoNetworkingReq_descr_;
extern TTCN_Module module_object;

} /* end of namespace */

/* Test port header files */

#include "AdapterControlPort.hh"
#include "UpperTesterGNPort.hh"
#include "GeoNetworkingPort.hh"

#endif