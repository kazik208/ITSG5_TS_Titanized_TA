// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for Aitor (aitorkun@aitorkun-HP-EliteBook-2530p) on Tue Feb 16 10:46:43 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "LibCommon_VerdictControl.hh"

namespace LibCommon__VerdictControl {

/* Prototypes of static functions */

static void pre_init_module();

/* Literal string constants */

static const unsigned char module_checksum[] = { 0x79, 0x41, 0xd2, 0x85, 0x94, 0x75, 0x91, 0xc2, 0x25, 0x74, 0x8a, 0xd6, 0x21, 0x36, 0x9d, 0x01 };

/* Global variable definitions */

// No XER for FncRetCode
const TTCN_Typedescriptor_t FncRetCode_descr_ = { "@LibCommon_VerdictControl.FncRetCode", NULL, NULL, NULL, NULL, &ENUMERATED_json_, NULL, TTCN_Typedescriptor_t::DONTCARE };
static const size_t num_namespaces = 0;
TTCN_Module module_object("LibCommon_VerdictControl", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_5,
  current_runtime_version.requires_minor_version_4,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Member functions of C++ classes */

FncRetCode::FncRetCode()
{
enum_value = UNBOUND_VALUE;
}

FncRetCode::FncRetCode(int other_value)
{
if (!is_valid_enum(other_value)) TTCN_error("Initializing a variable of enumerated type @LibCommon_VerdictControl.FncRetCode with invalid numeric value %d.", other_value);
enum_value = (enum_type)other_value;
}

FncRetCode::FncRetCode(enum_type other_value)
{
enum_value = other_value;
}

FncRetCode::FncRetCode(const FncRetCode& other_value)
: Base_Type()
{
if (other_value.enum_value == UNBOUND_VALUE) TTCN_error("Copying an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
enum_value = other_value.enum_value;
}

FncRetCode& FncRetCode::operator=(int other_value)
{
if (!is_valid_enum(other_value)) TTCN_error("Assigning unknown numeric value %d to a variable of enumerated type @LibCommon_VerdictControl.FncRetCode.", other_value);
enum_value = (enum_type)other_value;
return *this;
}

FncRetCode& FncRetCode::operator=(enum_type other_value)
{
enum_value = other_value;
return *this;
}

FncRetCode& FncRetCode::operator=(const FncRetCode& other_value)
{
if (other_value.enum_value == UNBOUND_VALUE) TTCN_error("Assignment of an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
enum_value = other_value.enum_value;
return *this;
}

boolean FncRetCode::operator==(enum_type other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value == other_value;
}

boolean FncRetCode::operator==(const FncRetCode& other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
if (other_value.enum_value == UNBOUND_VALUE) TTCN_error("The right operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value == other_value.enum_value;
}

boolean FncRetCode::operator<(enum_type other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value < other_value;
}

boolean FncRetCode::operator<(const FncRetCode& other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
if (other_value.enum_value == UNBOUND_VALUE) TTCN_error("The right operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value < other_value.enum_value;
}

boolean FncRetCode::operator>(enum_type other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value > other_value;
}

boolean FncRetCode::operator>(const FncRetCode& other_value) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("The left operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
if (other_value.enum_value == UNBOUND_VALUE) TTCN_error("The right operand of comparison is an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value > other_value.enum_value;
}

const char *FncRetCode::enum_to_str(enum_type enum_par)
{
switch (enum_par) {
case e__success: return "e_success";
case e__error: return "e_error";
case e__timeout: return "e_timeout";
default: return "<unknown>";
}
}

FncRetCode::enum_type FncRetCode::str_to_enum(const char *str_par)
{
if (!strcmp(str_par, "e_success")) return e__success;
else if (!strcmp(str_par, "e_error")) return e__error;
else if (!strcmp(str_par, "e_timeout")) return e__timeout;
else return UNKNOWN_VALUE;
}

boolean FncRetCode::is_valid_enum(int int_par)
{
switch (int_par) {
case 0:
case 1:
case 2:
return TRUE;
default:
return FALSE;
}
}

int FncRetCode::enum2int(enum_type enum_par)
{
if (enum_par==UNBOUND_VALUE || enum_par==UNKNOWN_VALUE) TTCN_error("The argument of function enum2int() is an %s value of enumerated type @LibCommon_VerdictControl.FncRetCode.", enum_par==UNBOUND_VALUE?"unbound":"invalid");
return enum_par;
}

int FncRetCode::enum2int(const FncRetCode& enum_par)
{
if (enum_par.enum_value==UNBOUND_VALUE || enum_par.enum_value==UNKNOWN_VALUE) TTCN_error("The argument of function enum2int() is an %s value of enumerated type @LibCommon_VerdictControl.FncRetCode.", enum_par==UNBOUND_VALUE?"unbound":"invalid");
return enum_par.enum_value;
}

void FncRetCode::int2enum(int int_val)
{
if (!is_valid_enum(int_val)) TTCN_error("Assigning invalid numeric value %d to a variable of enumerated type @LibCommon_VerdictControl.FncRetCode.", int_val);
enum_value = (enum_type)int_val;
}

FncRetCode::operator FncRetCode::enum_type() const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("Using the value of an unbound variable of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return enum_value;
}

void FncRetCode::log() const
{
if (enum_value != UNBOUND_VALUE) TTCN_Logger::log_event_enum(enum_to_str(enum_value), enum_value);
else TTCN_Logger::log_event_unbound();
}

void FncRetCode::set_param(Module_Param& param)
{
  param.basic_check(Module_Param::BC_VALUE, "enumerated value");
  Module_Param_Ptr mp = &param;
  if (param.get_type() == Module_Param::MP_Reference) {
    char* enum_name = param.get_enumerated();
    enum_value = (enum_name != NULL) ? str_to_enum(enum_name) : UNKNOWN_VALUE;
    if (is_valid_enum(enum_value)) {
      return;
    }
    mp = param.get_referenced_param();
  }
  if (mp->get_type()!=Module_Param::MP_Enumerated) param.type_error("enumerated value", "@LibCommon_VerdictControl.FncRetCode");
  enum_value = str_to_enum(mp->get_enumerated());
  if (!is_valid_enum(enum_value)) {
    param.error("Invalid enumerated value for type @LibCommon_VerdictControl.FncRetCode.");
  }
}

Module_Param* FncRetCode::get_param(Module_Param_Name& /* param_name */) const
{
  if (!is_bound()) {
    return new Module_Param_Unbound();
  }
  return new Module_Param_Enumerated(mcopystr(enum_to_str(enum_value)));
}

void FncRetCode::encode_text(Text_Buf& text_buf) const
{
if (enum_value == UNBOUND_VALUE) TTCN_error("Text encoder: Encoding an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
text_buf.push_int(enum_value);
}

void FncRetCode::decode_text(Text_Buf& text_buf)
{
enum_value = (enum_type)text_buf.pull_int().get_val();
if (!is_valid_enum(enum_value)) TTCN_error("Text decoder: Unknown numeric value %d was received for enumerated type @LibCommon_VerdictControl.FncRetCode.", enum_value);
}

void FncRetCode_template::copy_template(const FncRetCode_template& other_value)
{
set_selection(other_value);
switch (template_selection) {
case SPECIFIC_VALUE:
single_value = other_value.single_value;
break;
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
value_list.n_values = other_value.value_list.n_values;
value_list.list_value = new FncRetCode_template[value_list.n_values];
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
value_list.list_value[list_count].copy_template(other_value.value_list.list_value[list_count]);
break;
default:
TTCN_error("Copying an uninitialized/unsupported template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
}
}

FncRetCode_template::FncRetCode_template()
{
}

FncRetCode_template::FncRetCode_template(template_sel other_value)
 : Base_Template(other_value)
{
check_single_selection(other_value);
}

FncRetCode_template::FncRetCode_template(int other_value)
 : Base_Template(SPECIFIC_VALUE)
{
if (!FncRetCode::is_valid_enum(other_value)) TTCN_error("Initializing a template of enumerated type @LibCommon_VerdictControl.FncRetCode with unknown numeric value %d.", other_value);
single_value = (FncRetCode::enum_type)other_value;
}

FncRetCode_template::FncRetCode_template(FncRetCode::enum_type other_value)
 : Base_Template(SPECIFIC_VALUE)
{
single_value = other_value;
}

FncRetCode_template::FncRetCode_template(const FncRetCode& other_value)
 : Base_Template(SPECIFIC_VALUE)
{
if (other_value.enum_value == FncRetCode::UNBOUND_VALUE) TTCN_error("Creating a template from an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode.");
single_value = other_value.enum_value;
}

FncRetCode_template::FncRetCode_template(const OPTIONAL<FncRetCode>& other_value)
{
switch (other_value.get_selection()) {
case OPTIONAL_PRESENT:
set_selection(SPECIFIC_VALUE);
single_value = (FncRetCode::enum_type)(const FncRetCode&)other_value;
break;
case OPTIONAL_OMIT:
set_selection(OMIT_VALUE);
break;
default:
TTCN_error("Creating a template of enumerated type @LibCommon_VerdictControl.FncRetCode from an unbound optional field.");
}
}

FncRetCode_template::FncRetCode_template(const FncRetCode_template& other_value)
 : Base_Template()
{
copy_template(other_value);
}

FncRetCode_template::~FncRetCode_template()
{
clean_up();
}

boolean FncRetCode_template::is_bound() const
{
if (template_selection == UNINITIALIZED_TEMPLATE && !is_ifpresent) return FALSE;
return TRUE;
}

boolean FncRetCode_template::is_value() const
{
if (template_selection != SPECIFIC_VALUE || is_ifpresent) return FALSE;
return single_value != FncRetCode::UNBOUND_VALUE;
}

void FncRetCode_template::clean_up()
{
if (template_selection == VALUE_LIST || template_selection == COMPLEMENTED_LIST) delete [] value_list.list_value;
template_selection = UNINITIALIZED_TEMPLATE;
}

FncRetCode_template& FncRetCode_template::operator=(template_sel other_value)
{
check_single_selection(other_value);
clean_up();
set_selection(other_value);
return *this;
}

FncRetCode_template& FncRetCode_template::operator=(int other_value)
{
if (!FncRetCode::is_valid_enum(other_value)) TTCN_warning("Assigning unknown numeric value %d to a template of enumerated type @LibCommon_VerdictControl.FncRetCode.", other_value);
clean_up();
set_selection(SPECIFIC_VALUE);
single_value = (FncRetCode::enum_type)other_value;
return *this;
}

FncRetCode_template& FncRetCode_template::operator=(FncRetCode::enum_type other_value)
{
clean_up();
set_selection(SPECIFIC_VALUE);
single_value = other_value;
return *this;
}

FncRetCode_template& FncRetCode_template::operator=(const FncRetCode& other_value)
{
if (other_value.enum_value == FncRetCode::UNBOUND_VALUE) TTCN_error("Assignment of an unbound value of enumerated type @LibCommon_VerdictControl.FncRetCode to a template.");
clean_up();
set_selection(SPECIFIC_VALUE);
single_value = other_value.enum_value;
return *this;
}

FncRetCode_template& FncRetCode_template::operator=(const OPTIONAL<FncRetCode>& other_value)
{
clean_up();
switch (other_value.get_selection()) {
case OPTIONAL_PRESENT:
set_selection(SPECIFIC_VALUE);
single_value = (FncRetCode::enum_type)(const FncRetCode&)other_value;
break;
case OPTIONAL_OMIT:
set_selection(OMIT_VALUE);
break;
default:
TTCN_error("Assignment of an unbound optional field to a template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
}
return *this;
}

FncRetCode_template& FncRetCode_template::operator=(const FncRetCode_template& other_value)
{
if (&other_value != this) {
clean_up();
copy_template(other_value);
}
return *this;
}

boolean FncRetCode_template::match(FncRetCode::enum_type other_value, boolean) const
{
switch (template_selection) {
case SPECIFIC_VALUE:
return single_value == other_value;
case OMIT_VALUE:
return FALSE;
case ANY_VALUE:
case ANY_OR_OMIT:
return TRUE;
case VALUE_LIST:
case COMPLEMENTED_LIST:
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
if (value_list.list_value[list_count].match(other_value)) return template_selection == VALUE_LIST;
return template_selection == COMPLEMENTED_LIST;
default:
TTCN_error("Matching an uninitialized/unsupported template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
}
return FALSE;
}

boolean FncRetCode_template::match(const FncRetCode& other_value, boolean) const
{
if (other_value.enum_value == FncRetCode::UNBOUND_VALUE) TTCN_error("Matching a template of enumerated type @LibCommon_VerdictControl.FncRetCode with an unbound value.");
return match(other_value.enum_value);
}

FncRetCode::enum_type FncRetCode_template::valueof() const
{
if (template_selection != SPECIFIC_VALUE || is_ifpresent) TTCN_error("Performing a valueof or send operation on a non-specific template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return single_value;
}

void FncRetCode_template::set_type(template_sel template_type, unsigned int list_length)
{
if (template_type != VALUE_LIST && template_type != COMPLEMENTED_LIST) TTCN_error("Setting an invalid list type for a template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
clean_up();
set_selection(template_type);
value_list.n_values = list_length;
value_list.list_value = new FncRetCode_template[list_length];
}

FncRetCode_template& FncRetCode_template::list_item(unsigned int list_index)
{
if (template_selection != VALUE_LIST && template_selection != COMPLEMENTED_LIST) TTCN_error("Accessing a list element in a non-list template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
if (list_index >= value_list.n_values) TTCN_error("Index overflow in a value list template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
return value_list.list_value[list_index];
}

void FncRetCode_template::log() const
{
switch (template_selection) {
case SPECIFIC_VALUE:
TTCN_Logger::log_event_enum(FncRetCode::enum_to_str(single_value), single_value);
break;
case COMPLEMENTED_LIST:
TTCN_Logger::log_event_str("complement ");
case VALUE_LIST:
TTCN_Logger::log_char('(');
for (unsigned int elem_count = 0; elem_count < value_list.n_values; elem_count++) {
if (elem_count > 0) TTCN_Logger::log_event_str(", ");
value_list.list_value[elem_count].log();
}
TTCN_Logger::log_char(')');
break;
default:
log_generic();
}
log_ifpresent();
}

void FncRetCode_template::log_match(const FncRetCode& match_value, boolean) const
{
match_value.log();
TTCN_Logger::log_event_str(" with ");
log();
if (match(match_value)) TTCN_Logger::log_event_str(" matched");
else TTCN_Logger::log_event_str(" unmatched");
}

void FncRetCode_template::encode_text(Text_Buf& text_buf) const
{
encode_text_base(text_buf);
switch (template_selection) {
case SPECIFIC_VALUE:
text_buf.push_int(single_value);
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
text_buf.push_int(value_list.n_values);
for (unsigned int elem_count = 0; elem_count < value_list.n_values; elem_count++)
value_list.list_value[elem_count].encode_text(text_buf);
break;
default:
TTCN_error("Text encoder: Encoding an uninitialized/unsupported template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
}
}

void FncRetCode_template::decode_text(Text_Buf& text_buf)
{
clean_up();
decode_text_base(text_buf);
switch (template_selection) {
case SPECIFIC_VALUE:
single_value = (FncRetCode::enum_type)text_buf.pull_int().get_val();
if (!FncRetCode::is_valid_enum(single_value)) TTCN_error("Text decoder: Unknown numeric value %d was received for a template of enumerated type @LibCommon_VerdictControl.FncRetCode.", single_value);
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
value_list.n_values = text_buf.pull_int().get_val();
value_list.list_value = new FncRetCode_template[value_list.n_values];
for (unsigned int elem_count = 0; elem_count < value_list.n_values; elem_count++)
value_list.list_value[elem_count].decode_text(text_buf);
break;
default:
TTCN_error("Text decoder: An unknown/unsupported selection was received for a template of enumerated type @LibCommon_VerdictControl.FncRetCode.");
}
}

boolean FncRetCode_template::is_present(boolean legacy) const
{
if (template_selection==UNINITIALIZED_TEMPLATE) return FALSE;
return !match_omit(legacy);
}

boolean FncRetCode_template::match_omit(boolean legacy) const
{
if (is_ifpresent) return TRUE;
switch (template_selection) {
case OMIT_VALUE:
case ANY_OR_OMIT:
return TRUE;
case VALUE_LIST:
case COMPLEMENTED_LIST:
if (legacy) {
for (unsigned int i=0; i<value_list.n_values; i++)
if (value_list.list_value[i].match_omit())
return template_selection==VALUE_LIST;
return template_selection==COMPLEMENTED_LIST;
} // else fall through
default:
return FALSE;
}
return FALSE;
}

void FncRetCode_template::set_param(Module_Param& param)
{
  param.basic_check(Module_Param::BC_TEMPLATE, "enumerated template");
  Module_Param_Ptr mp = &param;
  if (param.get_type() == Module_Param::MP_Reference) {
    char* enum_name = param.get_enumerated();
    FncRetCode::enum_type enum_val = (enum_name != NULL) ? FncRetCode::str_to_enum(enum_name) : FncRetCode::UNKNOWN_VALUE;
    if (FncRetCode::is_valid_enum(enum_val)) {
      *this = enum_val;
      is_ifpresent = param.get_ifpresent() || mp->get_ifpresent();
      return;
    }
    mp = param.get_referenced_param();
  }
  switch (mp->get_type()) {
  case Module_Param::MP_Omit:
    *this = OMIT_VALUE;
    break;
  case Module_Param::MP_Any:
    *this = ANY_VALUE;
    break;
  case Module_Param::MP_AnyOrNone:
    *this = ANY_OR_OMIT;
    break;
  case Module_Param::MP_List_Template:
  case Module_Param::MP_ComplementList_Template: {
    FncRetCode_template temp;
    temp.set_type(mp->get_type()==Module_Param::MP_List_Template ? VALUE_LIST : COMPLEMENTED_LIST, mp->get_size());
    for (size_t p_i=0; p_i<mp->get_size(); p_i++) {
      temp.list_item(p_i).set_param(*mp->get_elem(p_i));
    }
    *this = temp;
    break; }
  case Module_Param::MP_Enumerated: {
    FncRetCode::enum_type enum_val = FncRetCode::str_to_enum(mp->get_enumerated());
    if (!FncRetCode::is_valid_enum(enum_val)) {
      param.error("Invalid enumerated value for type @LibCommon_VerdictControl.FncRetCode.");
    }
    *this = enum_val;
  } break;
  default:
    param.type_error("enumerated template", "@LibCommon_VerdictControl.FncRetCode");
  }
  is_ifpresent = param.get_ifpresent() || mp->get_ifpresent();
}

Module_Param* FncRetCode_template::get_param(Module_Param_Name& param_name) const
{
  Module_Param* mp = NULL;
  switch (template_selection) {
  case UNINITIALIZED_TEMPLATE:
    mp = new Module_Param_Unbound();
    break;
  case OMIT_VALUE:
    mp = new Module_Param_Omit();
    break;
  case ANY_VALUE:
    mp = new Module_Param_Any();
    break;
  case ANY_OR_OMIT:
    mp = new Module_Param_AnyOrNone();
    break;
  case SPECIFIC_VALUE:
    mp = new Module_Param_Enumerated(mcopystr(FncRetCode::enum_to_str(single_value)));
    break;
  case VALUE_LIST:
  case COMPLEMENTED_LIST: {
    if (template_selection == VALUE_LIST) {
      mp = new Module_Param_List_Template();
    }
    else {
      mp = new Module_Param_ComplementList_Template();
    }
    for (size_t i = 0; i < value_list.n_values; ++i) {
      mp->add_elem(value_list.list_value[i].get_param(param_name));
    }
    break; }
  default:
    break;
  }
  if (is_ifpresent) {
    mp->set_ifpresent();
  }
  return mp;
}

void FncRetCode_template::check_restriction(template_res t_res, const char* t_name,
boolean legacy) const
{
if (template_selection==UNINITIALIZED_TEMPLATE) return;
switch ((t_name&&(t_res==TR_VALUE))?TR_OMIT:t_res) {
case TR_VALUE:
if (!is_ifpresent && template_selection==SPECIFIC_VALUE) return;
break;
case TR_OMIT:
if (!is_ifpresent && (template_selection==OMIT_VALUE || template_selection==SPECIFIC_VALUE)) return;
break;
case TR_PRESENT:
if (!match_omit(legacy)) return;
break;
default:
return;
}
TTCN_error("Restriction `%s' on template of type %s violated.", get_res_name(t_res), t_name ? t_name : "@LibCommon_VerdictControl.FncRetCode");
}


/* Bodies of functions, altsteps and testcases */

void f__setVerdict(const FncRetCode& p__ret)
{
TTCN_Location current_location("LibCommon_VerdictControl.ttcn", 45, TTCN_Location::LOCATION_FUNCTION, "f_setVerdict");
current_location.update_lineno(46);
/* LibCommon_VerdictControl.ttcn, line 46 */
if ((p__ret == FncRetCode::e__success)) {
current_location.update_lineno(47);
/* LibCommon_VerdictControl.ttcn, line 47 */
TTCN_Runtime::setverdict(PASS);
}
else {
current_location.update_lineno(48);
/* LibCommon_VerdictControl.ttcn, line 48 */
if ((p__ret == FncRetCode::e__timeout)) {
current_location.update_lineno(49);
/* LibCommon_VerdictControl.ttcn, line 49 */
TTCN_Runtime::setverdict(INCONC);
}
else {
current_location.update_lineno(51);
/* LibCommon_VerdictControl.ttcn, line 51 */
TTCN_Runtime::setverdict(FAIL);
}
}
}

void f__setVerdictPreamble(const FncRetCode& p__ret)
{
TTCN_Location current_location("LibCommon_VerdictControl.ttcn", 64, TTCN_Location::LOCATION_FUNCTION, "f_setVerdictPreamble");
current_location.update_lineno(65);
/* LibCommon_VerdictControl.ttcn, line 65 */
TTCN_Logger::log_str(TTCN_USER, "f_setVerdictPreamble: This function is deprecated. Use f_setVerdictPreOrPostamble instead. ");
current_location.update_lineno(66);
/* LibCommon_VerdictControl.ttcn, line 66 */
f__setVerdictPreOrPostamble(p__ret);
}

void f__setVerdictPostamble(const FncRetCode& p__ret)
{
TTCN_Location current_location("LibCommon_VerdictControl.ttcn", 78, TTCN_Location::LOCATION_FUNCTION, "f_setVerdictPostamble");
current_location.update_lineno(79);
/* LibCommon_VerdictControl.ttcn, line 79 */
TTCN_Logger::log_str(TTCN_USER, "f_setVerdictPostamble: This function is deprecated. Use f_setVerdictPreOrPostamble instead. ");
current_location.update_lineno(80);
/* LibCommon_VerdictControl.ttcn, line 80 */
f__setVerdictPreOrPostamble(p__ret);
}

void f__setVerdictPreOrPostamble(const FncRetCode& p__ret)
{
TTCN_Location current_location("LibCommon_VerdictControl.ttcn", 90, TTCN_Location::LOCATION_FUNCTION, "f_setVerdictPreOrPostamble");
current_location.update_lineno(91);
/* LibCommon_VerdictControl.ttcn, line 91 */
if ((p__ret != FncRetCode::e__success)) {
current_location.update_lineno(92);
/* LibCommon_VerdictControl.ttcn, line 92 */
TTCN_Runtime::setverdict(INCONC);
}
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("LibCommon_VerdictControl.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "LibCommon_VerdictControl");
module_object.add_function("f_setVerdict", (genericfunc_t)&f__setVerdict, NULL);
module_object.add_function("f_setVerdictPreamble", (genericfunc_t)&f__setVerdictPreamble, NULL);
module_object.add_function("f_setVerdictPostamble", (genericfunc_t)&f__setVerdictPostamble, NULL);
module_object.add_function("f_setVerdictPreOrPostamble", (genericfunc_t)&f__setVerdictPreOrPostamble, NULL);
}


} /* end of namespace */