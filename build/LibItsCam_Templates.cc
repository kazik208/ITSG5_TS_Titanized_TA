// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for Aitor (aitorkun@aitorkun-HP-EliteBook-2530p) on Tue Feb 16 10:46:43 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "LibItsCam_Templates.hh"

namespace LibItsCam__Templates {

/* Prototypes of static functions */

static void pre_init_module();
static void post_init_module();

/* Literal string constants */

static const unsigned char bp_13_elements[] = { 3, 0 },
bp_12_elements[] = { 3, 1 },
bp_1_elements[] = { 0, 3 },
bp_0_elements[] = { 1, 3 },
bp_3_elements[] = { 2, 0, 3 },
bp_2_elements[] = { 2, 1, 3 },
bp_5_elements[] = { 2, 2, 0, 3 },
bp_4_elements[] = { 2, 2, 1, 3 },
bp_16_elements[] = { 2, 2, 1, 1, 3 },
bp_7_elements[] = { 2, 2, 2, 0, 3 },
bp_6_elements[] = { 2, 2, 2, 1, 3 },
bp_9_elements[] = { 2, 2, 2, 2, 0, 3 },
bp_8_elements[] = { 2, 2, 2, 2, 1, 3 },
bp_11_elements[] = { 2, 2, 2, 2, 2, 0, 3 },
bp_10_elements[] = { 2, 2, 2, 2, 2, 1, 3 },
bp_14_elements[] = { 2, 2, 2, 2, 2, 2, 0, 3 },
bp_15_elements[] = { 2, 2, 2, 2, 2, 2, 1, 3 };
static const BITSTRING_template bp_13(2, bp_13_elements),
bp_12(2, bp_12_elements),
bp_1(2, bp_1_elements),
bp_0(2, bp_0_elements),
bp_3(3, bp_3_elements),
bp_2(3, bp_2_elements),
bp_5(4, bp_5_elements),
bp_4(4, bp_4_elements),
bp_16(5, bp_16_elements),
bp_7(5, bp_7_elements),
bp_6(5, bp_6_elements),
bp_9(6, bp_9_elements),
bp_8(6, bp_8_elements),
bp_11(7, bp_11_elements),
bp_10(7, bp_10_elements),
bp_14(8, bp_14_elements),
bp_15(8, bp_15_elements);
static const unsigned char os_0_octets[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
static const OCTETSTRING os_0(8, os_0_octets);
static const unsigned char module_checksum[] = { 0xb2, 0xe2, 0x8b, 0xdc, 0xcd, 0xcd, 0x91, 0x7f, 0x42, 0xc5, 0x8b, 0x3c, 0xcd, 0x6b, 0x78, 0xf4 };

/* Global variable definitions */

static INTEGER_template template_mw__camIndWithGnParameters_p__gnNextHeader_defval;
const INTEGER_template& mw__camIndWithGnParameters_p__gnNextHeader_defval = template_mw__camIndWithGnParameters_p__gnNextHeader_defval;
static INTEGER_template template_mw__camIndWithGnParameters_p__gnHeaderType_defval;
const INTEGER_template& mw__camIndWithGnParameters_p__gnHeaderType_defval = template_mw__camIndWithGnParameters_p__gnHeaderType_defval;
static INTEGER_template template_mw__camIndWithGnParameters_p__gnHeaderSubtype_defval;
const INTEGER_template& mw__camIndWithGnParameters_p__gnHeaderSubtype_defval = template_mw__camIndWithGnParameters_p__gnHeaderSubtype_defval;
static INTEGER_template template_mw__camIndWithGnParameters_p__gnLifetime_defval;
const INTEGER_template& mw__camIndWithGnParameters_p__gnLifetime_defval = template_mw__camIndWithGnParameters_p__gnLifetime_defval;
static INTEGER_template template_mw__camIndWithGnParameters_p__gnTrafficClass_defval;
const INTEGER_template& mw__camIndWithGnParameters_p__gnTrafficClass_defval = template_mw__camIndWithGnParameters_p__gnTrafficClass_defval;
static INTEGER_template template_mw__camIndWithBtpParameters_p__btpDestinationPort_defval;
const INTEGER_template& mw__camIndWithBtpParameters_p__btpDestinationPort_defval = template_mw__camIndWithBtpParameters_p__btpDestinationPort_defval;
static INTEGER_template template_mw__camIndWithBtpParameters_p__btpInfo_defval;
const INTEGER_template& mw__camIndWithBtpParameters_p__btpInfo_defval = template_mw__camIndWithBtpParameters_p__btpInfo_defval;
static LibItsCommon__TypesAndValues::UtInitialize_template template_m__camInitialize;
const LibItsCommon__TypesAndValues::UtInitialize_template& m__camInitialize = template_m__camInitialize;
static ITS__Container::ReferencePosition_template template_m__tsPosition;
const ITS__Container::ReferencePosition_template& m__tsPosition = template_m__tsPosition;
static CAM__PDU__Descriptions::CAM_template template_mw__camMsg__any;
const CAM__PDU__Descriptions::CAM_template& mw__camMsg__any = template_mw__camMsg__any;
static CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template template_mw__HF__BV__any;
const CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template& mw__HF__BV__any = template_mw__HF__BV__any;
static CAM__PDU__Descriptions::CAM_template template_mw__camMsg__LF__any;
const CAM__PDU__Descriptions::CAM_template& mw__camMsg__LF__any = template_mw__camMsg__LF__any;
static CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template template_mw__camMsg__LF__BV_p__basicVehicleContainer_defval;
const CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template& mw__camMsg__LF__BV_p__basicVehicleContainer_defval = template_mw__camMsg__LF__BV_p__basicVehicleContainer_defval;
static CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template template_mw__LF__BV__any;
const CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template& mw__LF__BV__any = template_mw__LF__BV__any;
static CAM__PDU__Descriptions::CAM_template template_mw__camMsg__SVC__any;
const CAM__PDU__Descriptions::CAM_template& mw__camMsg__SVC__any = template_mw__camMsg__SVC__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__publicTransport__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__publicTransport__any = template_mw__publicTransport__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__specialTransport__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__specialTransport__any = template_mw__specialTransport__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__dangerousGoods__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__dangerousGoods__any = template_mw__dangerousGoods__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__roadWorks__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__roadWorks__any = template_mw__roadWorks__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__rescue__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__rescue__any = template_mw__rescue__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__emergency__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__emergency__any = template_mw__emergency__any;
static CAM__PDU__Descriptions::SpecialVehicleContainer_template template_mw__safetyCar__any;
const CAM__PDU__Descriptions::SpecialVehicleContainer_template& mw__safetyCar__any = template_mw__safetyCar__any;
static BITSTRING_template template_mw__brakePedalActive__On;
const BITSTRING_template& mw__brakePedalActive__On = template_mw__brakePedalActive__On;
static BITSTRING_template template_mw__brakePedalActive__Off;
const BITSTRING_template& mw__brakePedalActive__Off = template_mw__brakePedalActive__Off;
static BITSTRING_template template_mw__gasPedalActive__On;
const BITSTRING_template& mw__gasPedalActive__On = template_mw__gasPedalActive__On;
static BITSTRING_template template_mw__gasPedalActive__Off;
const BITSTRING_template& mw__gasPedalActive__Off = template_mw__gasPedalActive__Off;
static BITSTRING_template template_mw__emergencyBrakeActive__On;
const BITSTRING_template& mw__emergencyBrakeActive__On = template_mw__emergencyBrakeActive__On;
static BITSTRING_template template_mw__emergencyBrakeActive__Off;
const BITSTRING_template& mw__emergencyBrakeActive__Off = template_mw__emergencyBrakeActive__Off;
static BITSTRING_template template_mw__collisionWarningActive__On;
const BITSTRING_template& mw__collisionWarningActive__On = template_mw__collisionWarningActive__On;
static BITSTRING_template template_mw__collisionWarningActive__Off;
const BITSTRING_template& mw__collisionWarningActive__Off = template_mw__collisionWarningActive__Off;
static BITSTRING_template template_mw__accActive__On;
const BITSTRING_template& mw__accActive__On = template_mw__accActive__On;
static BITSTRING_template template_mw__accActive__Off;
const BITSTRING_template& mw__accActive__Off = template_mw__accActive__Off;
static BITSTRING_template template_mw__cruiseControl__On;
const BITSTRING_template& mw__cruiseControl__On = template_mw__cruiseControl__On;
static BITSTRING_template template_mw__cruiseControl__Off;
const BITSTRING_template& mw__cruiseControl__Off = template_mw__cruiseControl__Off;
static BITSTRING_template template_mw__speedLimiterActive__On;
const BITSTRING_template& mw__speedLimiterActive__On = template_mw__speedLimiterActive__On;
static BITSTRING_template template_mw__speedLimiterActive__Off;
const BITSTRING_template& mw__speedLimiterActive__Off = template_mw__speedLimiterActive__Off;
static BITSTRING_template template_mw__lowBeamLightsOff;
const BITSTRING_template& mw__lowBeamLightsOff = template_mw__lowBeamLightsOff;
static BITSTRING_template template_mw__lowBeamLightsOn;
const BITSTRING_template& mw__lowBeamLightsOn = template_mw__lowBeamLightsOn;
static BITSTRING_template template_mw__highBeamLightsOff;
const BITSTRING_template& mw__highBeamLightsOff = template_mw__highBeamLightsOff;
static BITSTRING_template template_mw__highBeamLightsOn;
const BITSTRING_template& mw__highBeamLightsOn = template_mw__highBeamLightsOn;
static BITSTRING_template template_mw__leftTurnSignalOff;
const BITSTRING_template& mw__leftTurnSignalOff = template_mw__leftTurnSignalOff;
static BITSTRING_template template_mw__leftTurnSignalOn;
const BITSTRING_template& mw__leftTurnSignalOn = template_mw__leftTurnSignalOn;
static BITSTRING_template template_mw__rightTurnSignalOff;
const BITSTRING_template& mw__rightTurnSignalOff = template_mw__rightTurnSignalOff;
static BITSTRING_template template_mw__rightTurnSignalOn;
const BITSTRING_template& mw__rightTurnSignalOn = template_mw__rightTurnSignalOn;
static BITSTRING_template template_mw__daytimeRunningLightsOff;
const BITSTRING_template& mw__daytimeRunningLightsOff = template_mw__daytimeRunningLightsOff;
static BITSTRING_template template_mw__daytimeRunningLightsOn;
const BITSTRING_template& mw__daytimeRunningLightsOn = template_mw__daytimeRunningLightsOn;
static BITSTRING_template template_mw__reverseLightOff;
const BITSTRING_template& mw__reverseLightOff = template_mw__reverseLightOff;
static BITSTRING_template template_mw__reverseLightOn;
const BITSTRING_template& mw__reverseLightOn = template_mw__reverseLightOn;
static BITSTRING_template template_mw__fogLightOff;
const BITSTRING_template& mw__fogLightOff = template_mw__fogLightOff;
static BITSTRING_template template_mw__fogLightOn;
const BITSTRING_template& mw__fogLightOn = template_mw__fogLightOn;
static BITSTRING_template template_mw__parkingLightsOff;
const BITSTRING_template& mw__parkingLightsOff = template_mw__parkingLightsOff;
static BITSTRING_template template_mw__parkingLightsOn;
const BITSTRING_template& mw__parkingLightsOn = template_mw__parkingLightsOn;
static BITSTRING_template template_mw__hazardConditionOn;
const BITSTRING_template& mw__hazardConditionOn = template_mw__hazardConditionOn;
static const size_t num_namespaces = 0;
TTCN_Module module_object("LibItsCam_Templates", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, post_init_module, NULL, NULL, NULL, NULL, NULL, NULL);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_5,
  current_runtime_version.requires_minor_version_4,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Bodies of functions, altsteps and testcases */

LibItsCam__TestSystem::CamInd_template mw__camInd(const CAM__PDU__Descriptions::CAM_template& p__camMsg)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 35, TTCN_Location::LOCATION_TEMPLATE, "mw_camInd");
LibItsCam__TestSystem::CamInd_template ret_val;
ret_val.msgIn() = p__camMsg;
ret_val.gnNextHeader() = ANY_OR_OMIT;
ret_val.gnHeaderType() = ANY_OR_OMIT;
ret_val.gnHeaderSubtype() = ANY_OR_OMIT;
ret_val.gnLifetime() = ANY_OR_OMIT;
ret_val.gnTrafficClass() = ANY_OR_OMIT;
ret_val.btpDestinationPort() = ANY_OR_OMIT;
ret_val.btpInfo() = ANY_OR_OMIT;
return ret_val;
}

LibItsCam__TestSystem::CamInd_template mw__camIndWithGnParameters(const CAM__PDU__Descriptions::CAM_template& p__camMsg, const INTEGER_template& p__gnNextHeader, const INTEGER_template& p__gnHeaderType, const INTEGER_template& p__gnHeaderSubtype, const INTEGER_template& p__gnLifetime, const INTEGER_template& p__gnTrafficClass)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 57, TTCN_Location::LOCATION_TEMPLATE, "mw_camIndWithGnParameters");
LibItsCam__TestSystem::CamInd_template ret_val(mw__camInd(p__camMsg));
ret_val.gnNextHeader() = p__gnNextHeader;
ret_val.gnHeaderType() = p__gnHeaderType;
ret_val.gnHeaderSubtype() = p__gnHeaderSubtype;
ret_val.gnLifetime() = p__gnLifetime;
ret_val.gnTrafficClass() = p__gnTrafficClass;
return ret_val;
}

LibItsCam__TestSystem::CamInd_template mw__camIndWithBtpParameters(const CAM__PDU__Descriptions::CAM_template& p__camMsg, const INTEGER_template& p__btpDestinationPort, const INTEGER_template& p__btpInfo)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 78, TTCN_Location::LOCATION_TEMPLATE, "mw_camIndWithBtpParameters");
LibItsCam__TestSystem::CamInd_template ret_val(mw__camInd(p__camMsg));
ret_val.btpDestinationPort() = p__btpDestinationPort;
ret_val.btpInfo() = p__btpInfo;
return ret_val;
}

LibItsCam__TestSystem::CamReq_template m__camReq(const CAM__PDU__Descriptions::CAM_template& p__camMsg)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 91, TTCN_Location::LOCATION_TEMPLATE, "m_camReq");
LibItsCam__TestSystem::CamReq_template ret_val;
ret_val.msgOut() = p__camMsg;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__changeCurvature(const INTEGER& p__changeCurvature)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 110, TTCN_Location::LOCATION_TEMPLATE, "m_changeCurvature");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.changeCurvature() = p__changeCurvature;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__changeSpeed(const INTEGER& p__changeSpeed)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 118, TTCN_Location::LOCATION_TEMPLATE, "m_changeSpeed");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.changeSpeed() = p__changeSpeed;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__setAccelerationControlStatus(const BITSTRING& p__status)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 126, TTCN_Location::LOCATION_TEMPLATE, "m_setAccelerationControlStatus");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.setAccelerationControlStatus() = p__status;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__setExteriorLightsStatus(const BITSTRING& p__status)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 134, TTCN_Location::LOCATION_TEMPLATE, "m_setExteriorLightsStatus");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.setExteriorLightsStatus() = p__status;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__changeHeading(const INTEGER& p__changeHeading)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 142, TTCN_Location::LOCATION_TEMPLATE, "m_changeHeading");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.changeHeading() = p__changeHeading;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__setDriveDirection(const ITS__Container::DriveDirection& p__driveDirection)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 150, TTCN_Location::LOCATION_TEMPLATE, "m_setDriveDirection");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.setDriveDirection() = p__driveDirection;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__changeYawRate(const INTEGER& p__changeYawRate)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 158, TTCN_Location::LOCATION_TEMPLATE, "m_changeYawRate");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.changeYawRate() = p__changeYawRate;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__setVehicleRole(const ITS__Container::VehicleRole& p__vehicleRole)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 166, TTCN_Location::LOCATION_TEMPLATE, "m_setVehicleRole");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.setVehicleRole() = p__vehicleRole;
return ret_val;
}

LibItsCam__TypesAndValues::UtCamTrigger_template m__setDangerousGoods(const ITS__Container::DangerousGoodsBasic& p__dangerousGoods)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 174, TTCN_Location::LOCATION_TEMPLATE, "m_setDangerousGoods");
LibItsCam__TypesAndValues::UtCamTrigger_template ret_val;
ret_val.setDangerousGoods() = p__dangerousGoods;
return ret_val;
}

CAM__PDU__Descriptions::CAM_template mw__camMsg__BC__refPos(const ITS__Container::ReferencePosition_template& p__referencePosition)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 226, TTCN_Location::LOCATION_TEMPLATE, "mw_camMsg_BC_refPos");
CAM__PDU__Descriptions::CAM_template ret_val(mw__camMsg__any);
{
CAM__PDU__Descriptions::CamParameters_template& tmp_4 = ret_val.cam().camParameters();
{
CAM__PDU__Descriptions::BasicContainer_template& tmp_5 = tmp_4.basicContainer();
tmp_5.stationType() = ANY_VALUE;
tmp_5.referencePosition() = p__referencePosition;
}
tmp_4.highFrequencyContainer() = ANY_VALUE;
tmp_4.lowFrequencyContainer() = ANY_OR_OMIT;
tmp_4.specialVehicleContainer() = ANY_OR_OMIT;
}
return ret_val;
}

CAM__PDU__Descriptions::CAM_template mw__camMsg__HF__BV(const CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template& p__basicVehicleContainer)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 251, TTCN_Location::LOCATION_TEMPLATE, "mw_camMsg_HF_BV");
CAM__PDU__Descriptions::CAM_template ret_val(mw__camMsg__any);
{
CAM__PDU__Descriptions::CamParameters_template& tmp_6 = ret_val.cam().camParameters();
tmp_6.basicContainer() = ANY_VALUE;
tmp_6.highFrequencyContainer().basicVehicleContainerHighFrequency() = p__basicVehicleContainer;
tmp_6.lowFrequencyContainer() = ANY_OR_OMIT;
tmp_6.specialVehicleContainer() = ANY_OR_OMIT;
}
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__curvature(const INTEGER_template& p__curvatureValue)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 294, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_curvature");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
{
ITS__Container::Curvature_template& tmp_7 = ret_val.curvature();
tmp_7.curvatureValue() = p__curvatureValue;
tmp_7.curvatureConfidence() = ANY_VALUE;
}
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__accCtrl(const BITSTRING_template& p__accCtrl)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 309, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_accCtrl");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
ret_val.accelerationControl() = p__accCtrl;
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__heading(const INTEGER_template& p__headingValue)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 321, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_heading");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
{
ITS__Container::Heading_template& tmp_8 = ret_val.heading();
tmp_8.headingValue() = p__headingValue;
tmp_8.headingConfidence() = ANY_VALUE;
}
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__speed(const INTEGER_template& p__speedValue)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 336, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_speed");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
{
ITS__Container::Speed_template& tmp_9 = ret_val.speed();
tmp_9.speedValue() = p__speedValue;
tmp_9.speedConfidence() = ANY_VALUE;
}
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__driveDirection(const ITS__Container::DriveDirection_template& p__driveDirection)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 351, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_driveDirection");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
ret_val.driveDirection() = p__driveDirection;
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template mw__HF__BV__yawRate(const INTEGER_template& p__yawRateValue)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 363, TTCN_Location::LOCATION_TEMPLATE, "mw_HF_BV_yawRate");
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template ret_val(mw__HF__BV__any);
{
ITS__Container::YawRate_template& tmp_10 = ret_val.yawRate();
tmp_10.yawRateValue() = p__yawRateValue;
tmp_10.yawRateConfidence() = ANY_VALUE;
}
return ret_val;
}

CAM__PDU__Descriptions::CAM_template mw__camMsg__LF__BV(const CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template& p__basicVehicleContainer)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 397, TTCN_Location::LOCATION_TEMPLATE, "mw_camMsg_LF_BV");
CAM__PDU__Descriptions::CAM_template ret_val(mw__camMsg__any);
{
CAM__PDU__Descriptions::CamParameters_template& tmp_12 = ret_val.cam().camParameters();
tmp_12.basicContainer() = ANY_VALUE;
tmp_12.highFrequencyContainer() = ANY_VALUE;
tmp_12.lowFrequencyContainer().basicVehicleContainerLowFrequency() = p__basicVehicleContainer;
tmp_12.specialVehicleContainer() = ANY_OR_OMIT;
}
return ret_val;
}

CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template mw__LF__BV__extLights(const BITSTRING_template& p__extLights)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 427, TTCN_Location::LOCATION_TEMPLATE, "mw_LF_BV_extLights");
CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template ret_val(mw__LF__BV__any);
ret_val.exteriorLights() = p__extLights;
return ret_val;
}

CAM__PDU__Descriptions::CAM_template mw__camMsg__SVC(const CAM__PDU__Descriptions::SpecialVehicleContainer_template& p__specialVehicleContainer)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 457, TTCN_Location::LOCATION_TEMPLATE, "mw_camMsg_SVC");
CAM__PDU__Descriptions::CAM_template ret_val(mw__camMsg__SVC__any);
ret_val.cam().camParameters().specialVehicleContainer() = p__specialVehicleContainer;
return ret_val;
}

CAM__PDU__Descriptions::CAM_template m__camMsg__vehicle__HF__BV(const INTEGER& p__stationId, const INTEGER& p__generationTime, const ITS__Container::ReferencePosition_template& p__referencePosition)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 526, TTCN_Location::LOCATION_TEMPLATE, "m_camMsg_vehicle_HF_BV");
CAM__PDU__Descriptions::CAM_template ret_val;
{
ITS__Container::ItsPduHeader_template& tmp_14 = ret_val.header();
tmp_14.protocolVersion() = LibItsCam__TypesAndValues::c__protocolVersionCam;
tmp_14.messageID() = LibItsCam__TypesAndValues::c__messageIdCam;
tmp_14.stationID() = p__stationId;
}
{
CAM__PDU__Descriptions::CoopAwareness_template& tmp_15 = ret_val.cam();
tmp_15.generationDeltaTime() = p__generationTime;
{
CAM__PDU__Descriptions::CamParameters_template& tmp_16 = tmp_15.camParameters();
{
CAM__PDU__Descriptions::BasicContainer_template& tmp_17 = tmp_16.basicContainer();
tmp_17.stationType() = LibItsCommon__TypesAndValues::c__stationType__passengerCar;
tmp_17.referencePosition() = p__referencePosition;
}
{
CAM__PDU__Descriptions::BasicVehicleContainerHighFrequency_template& tmp_18 = tmp_16.highFrequencyContainer().basicVehicleContainerHighFrequency();
{
ITS__Container::Heading_template& tmp_19 = tmp_18.heading();
tmp_19.headingValue() = LibItsCommon__TypesAndValues::c__headingValue__wgs84North;
tmp_19.headingConfidence() = 10;
}
{
ITS__Container::Speed_template& tmp_20 = tmp_18.speed();
tmp_20.speedValue() = 45;
tmp_20.speedConfidence() = 5;
}
tmp_18.driveDirection() = ITS__Container::DriveDirection::forward;
{
ITS__Container::VehicleLength_template& tmp_21 = tmp_18.vehicleLength();
tmp_21.vehicleLengthValue() = 50;
tmp_21.vehicleLengthConfidenceIndication() = ITS__Container::VehicleLengthConfidenceIndication::noTrailerPresent;
}
tmp_18.vehicleWidth() = 21;
{
ITS__Container::LongitudinalAcceleration_template& tmp_22 = tmp_18.longitudinalAcceleration();
tmp_22.longitudinalAccelerationValue() = LibItsCommon__TypesAndValues::c__longitudinalAccelerationValue__unavailable;
tmp_22.longitudinalAccelerationConfidence() = LibItsCommon__TypesAndValues::c__accelerationConfidence__unavailable;
}
{
ITS__Container::Curvature_template& tmp_23 = tmp_18.curvature();
tmp_23.curvatureValue() = LibItsCommon__TypesAndValues::c__curvatureValue__straight;
tmp_23.curvatureConfidence() = ITS__Container::CurvatureConfidence::unavailable;
}
tmp_18.curvatureCalculationMode() = ITS__Container::CurvatureCalculationMode::yawRateUsed;
{
ITS__Container::YawRate_template& tmp_24 = tmp_18.yawRate();
tmp_24.yawRateValue() = LibItsCommon__TypesAndValues::c__yawRateValue__straight;
tmp_24.yawRateConfidence() = ITS__Container::YawRateConfidence::unavailable;
}
tmp_18.accelerationControl() = OMIT_VALUE;
tmp_18.lanePosition() = OMIT_VALUE;
tmp_18.steeringWheelAngle() = OMIT_VALUE;
tmp_18.lateralAcceleration() = OMIT_VALUE;
tmp_18.verticalAcceleration() = OMIT_VALUE;
tmp_18.performanceClass() = OMIT_VALUE;
tmp_18.cenDsrcTollingZone() = OMIT_VALUE;
}
tmp_16.lowFrequencyContainer() = OMIT_VALUE;
tmp_16.specialVehicleContainer() = OMIT_VALUE;
}
}
return ret_val;
}

CAM__PDU__Descriptions::CAM_template m__camMsg__vehicle(const INTEGER& p__stationId, const INTEGER& p__generationTime, const ITS__Container::ReferencePosition_template& p__referencePosition)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 593, TTCN_Location::LOCATION_TEMPLATE, "m_camMsg_vehicle");
CAM__PDU__Descriptions::CAM_template ret_val(m__camMsg__vehicle__HF__BV(p__stationId, p__generationTime, p__referencePosition));
{
CAM__PDU__Descriptions::BasicVehicleContainerLowFrequency_template& tmp_25 = ret_val.cam().camParameters().lowFrequencyContainer().basicVehicleContainerLowFrequency();
tmp_25.vehicleRole() = ITS__Container::VehicleRole::default__;
tmp_25.exteriorLights() = LibItsCam__TypesAndValues::c__daytimeRunningLightsOn;
tmp_25.pathHistory() = NULL_VALUE;
}
return ret_val;
}

INTEGER f__integer2Longitude(const INTEGER& p__longitude)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 781, TTCN_Location::LOCATION_FUNCTION, "f_integer2Longitude");
current_location.update_lineno(783);
/* LibItsCam_Templates.ttcn, line 783 */
INTEGER v__longitude(LibItsCommon__Functions::f__abs(p__longitude));
current_location.update_lineno(785);
/* LibItsCam_Templates.ttcn, line 785 */
return v__longitude;
}

INTEGER f__integer2Latitude(const INTEGER& p__latitude)
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 793, TTCN_Location::LOCATION_FUNCTION, "f_integer2Latitude");
current_location.update_lineno(795);
/* LibItsCam_Templates.ttcn, line 795 */
INTEGER v__latitude(LibItsCommon__Functions::f__abs(p__latitude));
current_location.update_lineno(797);
/* LibItsCam_Templates.ttcn, line 797 */
return v__latitude;
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "LibItsCam_Templates");
LibItsCommon__Functions::module_object.pre_init_module();
LibItsCam__TestSystem::module_object.pre_init_module();
module_object.add_function("f_integer2Longitude", (genericfunc_t)&f__integer2Longitude, NULL);
module_object.add_function("f_integer2Latitude", (genericfunc_t)&f__integer2Latitude, NULL);
}

static void post_init_module()
{
TTCN_Location current_location("LibItsCam_Templates.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "LibItsCam_Templates");
LibItsCommon__Functions::module_object.post_init_module();
LibItsCam__TestSystem::module_object.post_init_module();
template_mw__camIndWithGnParameters_p__gnNextHeader_defval = ANY_OR_OMIT;
template_mw__camIndWithGnParameters_p__gnHeaderType_defval = ANY_OR_OMIT;
template_mw__camIndWithGnParameters_p__gnHeaderSubtype_defval = ANY_OR_OMIT;
template_mw__camIndWithGnParameters_p__gnLifetime_defval = ANY_OR_OMIT;
template_mw__camIndWithGnParameters_p__gnTrafficClass_defval = ANY_OR_OMIT;
template_mw__camIndWithBtpParameters_p__btpDestinationPort_defval = ANY_OR_OMIT;
template_mw__camIndWithBtpParameters_p__btpInfo_defval = ANY_OR_OMIT;
current_location.update_lineno(102);
/* LibItsCam_Templates.ttcn, line 102 */
template_m__camInitialize.hashedId8() = os_0;
current_location.update_lineno(187);
/* LibItsCam_Templates.ttcn, line 187 */
template_m__tsPosition.latitude() = f__integer2Latitude(LibItsCommon__Functions::f__getTsLatitude());
template_m__tsPosition.longitude() = f__integer2Longitude(LibItsCommon__Functions::f__getTsLongitude());
{
ITS__Container::PosConfidenceEllipse_template& tmp_0 = template_m__tsPosition.positionConfidenceEllipse();
tmp_0.semiMajorConfidence() = LibItsCommon__TypesAndValues::c__semiAxisLengthOneCentimeter;
tmp_0.semiMinorConfidence() = LibItsCommon__TypesAndValues::c__semiAxisLengthOneCentimeter;
tmp_0.semiMajorOrientation() = LibItsCommon__TypesAndValues::c__headingValue__wgs84North;
}
{
ITS__Container::Altitude_template& tmp_1 = template_m__tsPosition.altitude();
tmp_1.altitudeValue() = LibItsCommon__TypesAndValues::c__altitudeValue__seaLevel;
tmp_1.altitudeConfidence() = ITS__Container::AltitudeConfidence::unavailable;
}
current_location.update_lineno(206);
/* LibItsCam_Templates.ttcn, line 206 */
{
ITS__Container::ItsPduHeader_template& tmp_2 = template_mw__camMsg__any.header();
tmp_2.protocolVersion() = LibItsCam__TypesAndValues::c__protocolVersionCam;
tmp_2.messageID() = LibItsCam__TypesAndValues::c__messageIdCam;
tmp_2.stationID() = ANY_VALUE;
}
{
CAM__PDU__Descriptions::CoopAwareness_template& tmp_3 = template_mw__camMsg__any.cam();
tmp_3.generationDeltaTime() = ANY_VALUE;
tmp_3.camParameters() = ANY_VALUE;
}
current_location.update_lineno(270);
/* LibItsCam_Templates.ttcn, line 270 */
template_mw__HF__BV__any.heading() = ANY_VALUE;
template_mw__HF__BV__any.speed() = ANY_VALUE;
template_mw__HF__BV__any.driveDirection() = ANY_VALUE;
template_mw__HF__BV__any.vehicleLength() = ANY_VALUE;
template_mw__HF__BV__any.vehicleWidth() = ANY_VALUE;
template_mw__HF__BV__any.longitudinalAcceleration() = ANY_VALUE;
template_mw__HF__BV__any.curvature() = ANY_VALUE;
template_mw__HF__BV__any.curvatureCalculationMode() = ANY_VALUE;
template_mw__HF__BV__any.yawRate() = ANY_VALUE;
template_mw__HF__BV__any.accelerationControl() = ANY_OR_OMIT;
template_mw__HF__BV__any.lanePosition() = ANY_OR_OMIT;
template_mw__HF__BV__any.steeringWheelAngle() = ANY_OR_OMIT;
template_mw__HF__BV__any.lateralAcceleration() = ANY_OR_OMIT;
template_mw__HF__BV__any.verticalAcceleration() = ANY_OR_OMIT;
template_mw__HF__BV__any.performanceClass() = ANY_OR_OMIT;
template_mw__HF__BV__any.cenDsrcTollingZone() = ANY_OR_OMIT;
current_location.update_lineno(381);
/* LibItsCam_Templates.ttcn, line 381 */
template_mw__camMsg__LF__any = mw__camMsg__any;
{
CAM__PDU__Descriptions::CamParameters_template& tmp_11 = template_mw__camMsg__LF__any.cam().camParameters();
tmp_11.basicContainer() = ANY_VALUE;
tmp_11.highFrequencyContainer() = ANY_VALUE;
tmp_11.lowFrequencyContainer() = ANY_VALUE;
tmp_11.specialVehicleContainer() = ANY_OR_OMIT;
}
template_mw__camMsg__LF__BV_p__basicVehicleContainer_defval = ANY_VALUE;
current_location.update_lineno(416);
/* LibItsCam_Templates.ttcn, line 416 */
template_mw__LF__BV__any.vehicleRole() = ANY_VALUE;
template_mw__LF__BV__any.exteriorLights() = ANY_VALUE;
template_mw__LF__BV__any.pathHistory() = ANY_VALUE;
current_location.update_lineno(442);
/* LibItsCam_Templates.ttcn, line 442 */
template_mw__camMsg__SVC__any = mw__camMsg__any;
{
CAM__PDU__Descriptions::CamParameters_template& tmp_13 = template_mw__camMsg__SVC__any.cam().camParameters();
tmp_13.basicContainer() = ANY_VALUE;
tmp_13.highFrequencyContainer() = ANY_VALUE;
tmp_13.lowFrequencyContainer() = ANY_OR_OMIT;
tmp_13.specialVehicleContainer() = ANY_VALUE;
}
current_location.update_lineno(470);
/* LibItsCam_Templates.ttcn, line 470 */
template_mw__publicTransport__any.publicTransportContainer() = ANY_VALUE;
current_location.update_lineno(477);
/* LibItsCam_Templates.ttcn, line 477 */
template_mw__specialTransport__any.specialTransportContainer() = ANY_VALUE;
current_location.update_lineno(484);
/* LibItsCam_Templates.ttcn, line 484 */
template_mw__dangerousGoods__any.dangerousGoodsContainer() = ANY_VALUE;
current_location.update_lineno(491);
/* LibItsCam_Templates.ttcn, line 491 */
template_mw__roadWorks__any.roadWorksContainerBasic() = ANY_VALUE;
current_location.update_lineno(498);
/* LibItsCam_Templates.ttcn, line 498 */
template_mw__rescue__any.rescueContainer() = ANY_VALUE;
current_location.update_lineno(505);
/* LibItsCam_Templates.ttcn, line 505 */
template_mw__emergency__any.emergencyContainer() = ANY_VALUE;
current_location.update_lineno(512);
/* LibItsCam_Templates.ttcn, line 512 */
template_mw__safetyCar__any.safetyCarContainer() = ANY_VALUE;
current_location.update_lineno(618);
/* LibItsCam_Templates.ttcn, line 618 */
template_mw__brakePedalActive__On = bp_0;
template_mw__brakePedalActive__On.set_single_length(7);
current_location.update_lineno(623);
/* LibItsCam_Templates.ttcn, line 623 */
template_mw__brakePedalActive__Off = bp_1;
template_mw__brakePedalActive__Off.set_single_length(7);
current_location.update_lineno(628);
/* LibItsCam_Templates.ttcn, line 628 */
template_mw__gasPedalActive__On = bp_2;
template_mw__gasPedalActive__On.set_single_length(7);
current_location.update_lineno(633);
/* LibItsCam_Templates.ttcn, line 633 */
template_mw__gasPedalActive__Off = bp_3;
template_mw__gasPedalActive__Off.set_single_length(7);
current_location.update_lineno(638);
/* LibItsCam_Templates.ttcn, line 638 */
template_mw__emergencyBrakeActive__On = bp_4;
template_mw__emergencyBrakeActive__On.set_single_length(7);
current_location.update_lineno(643);
/* LibItsCam_Templates.ttcn, line 643 */
template_mw__emergencyBrakeActive__Off = bp_5;
template_mw__emergencyBrakeActive__Off.set_single_length(7);
current_location.update_lineno(648);
/* LibItsCam_Templates.ttcn, line 648 */
template_mw__collisionWarningActive__On = bp_6;
template_mw__collisionWarningActive__On.set_single_length(7);
current_location.update_lineno(653);
/* LibItsCam_Templates.ttcn, line 653 */
template_mw__collisionWarningActive__Off = bp_7;
template_mw__collisionWarningActive__Off.set_single_length(7);
current_location.update_lineno(658);
/* LibItsCam_Templates.ttcn, line 658 */
template_mw__accActive__On = bp_8;
template_mw__accActive__On.set_single_length(7);
current_location.update_lineno(663);
/* LibItsCam_Templates.ttcn, line 663 */
template_mw__accActive__Off = bp_9;
template_mw__accActive__Off.set_single_length(7);
current_location.update_lineno(668);
/* LibItsCam_Templates.ttcn, line 668 */
template_mw__cruiseControl__On = bp_10;
template_mw__cruiseControl__On.set_single_length(7);
current_location.update_lineno(673);
/* LibItsCam_Templates.ttcn, line 673 */
template_mw__cruiseControl__Off = bp_11;
template_mw__cruiseControl__Off.set_single_length(7);
current_location.update_lineno(678);
/* LibItsCam_Templates.ttcn, line 678 */
template_mw__speedLimiterActive__On = bp_12;
template_mw__speedLimiterActive__On.set_single_length(7);
current_location.update_lineno(683);
/* LibItsCam_Templates.ttcn, line 683 */
template_mw__speedLimiterActive__Off = bp_13;
template_mw__speedLimiterActive__Off.set_single_length(7);
current_location.update_lineno(692);
/* LibItsCam_Templates.ttcn, line 692 */
template_mw__lowBeamLightsOff = bp_1;
template_mw__lowBeamLightsOff.set_single_length(8);
current_location.update_lineno(697);
/* LibItsCam_Templates.ttcn, line 697 */
template_mw__lowBeamLightsOn = bp_0;
template_mw__lowBeamLightsOn.set_single_length(8);
current_location.update_lineno(702);
/* LibItsCam_Templates.ttcn, line 702 */
template_mw__highBeamLightsOff = bp_3;
template_mw__highBeamLightsOff.set_single_length(8);
current_location.update_lineno(707);
/* LibItsCam_Templates.ttcn, line 707 */
template_mw__highBeamLightsOn = bp_2;
template_mw__highBeamLightsOn.set_single_length(8);
current_location.update_lineno(712);
/* LibItsCam_Templates.ttcn, line 712 */
template_mw__leftTurnSignalOff = bp_5;
template_mw__leftTurnSignalOff.set_single_length(8);
current_location.update_lineno(717);
/* LibItsCam_Templates.ttcn, line 717 */
template_mw__leftTurnSignalOn = bp_4;
template_mw__leftTurnSignalOn.set_single_length(8);
current_location.update_lineno(722);
/* LibItsCam_Templates.ttcn, line 722 */
template_mw__rightTurnSignalOff = bp_7;
template_mw__rightTurnSignalOff.set_single_length(8);
current_location.update_lineno(726);
/* LibItsCam_Templates.ttcn, line 726 */
template_mw__rightTurnSignalOn = bp_6;
template_mw__rightTurnSignalOn.set_single_length(8);
current_location.update_lineno(731);
/* LibItsCam_Templates.ttcn, line 731 */
template_mw__daytimeRunningLightsOff = bp_9;
template_mw__daytimeRunningLightsOff.set_single_length(8);
current_location.update_lineno(735);
/* LibItsCam_Templates.ttcn, line 735 */
template_mw__daytimeRunningLightsOn = bp_8;
template_mw__daytimeRunningLightsOn.set_single_length(8);
current_location.update_lineno(740);
/* LibItsCam_Templates.ttcn, line 740 */
template_mw__reverseLightOff = bp_11;
template_mw__reverseLightOff.set_single_length(8);
current_location.update_lineno(745);
/* LibItsCam_Templates.ttcn, line 745 */
template_mw__reverseLightOn = bp_10;
template_mw__reverseLightOn.set_single_length(8);
current_location.update_lineno(750);
/* LibItsCam_Templates.ttcn, line 750 */
template_mw__fogLightOff = bp_14;
template_mw__fogLightOff.set_single_length(8);
current_location.update_lineno(755);
/* LibItsCam_Templates.ttcn, line 755 */
template_mw__fogLightOn = bp_15;
template_mw__fogLightOn.set_single_length(8);
current_location.update_lineno(760);
/* LibItsCam_Templates.ttcn, line 760 */
template_mw__parkingLightsOff = bp_13;
template_mw__parkingLightsOff.set_single_length(8);
current_location.update_lineno(765);
/* LibItsCam_Templates.ttcn, line 765 */
template_mw__parkingLightsOn = bp_12;
template_mw__parkingLightsOn.set_single_length(8);
current_location.update_lineno(770);
/* LibItsCam_Templates.ttcn, line 770 */
template_mw__hazardConditionOn = bp_16;
template_mw__hazardConditionOn.set_single_length(8);
}


} /* end of namespace */