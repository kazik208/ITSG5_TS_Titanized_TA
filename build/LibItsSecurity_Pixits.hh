// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for Aitor (aitorkun@aitorkun-HP-EliteBook-2530p) on Tue Feb 16 10:46:43 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef LibItsSecurity__Pixits_HH
#define LibItsSecurity__Pixits_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include "LibItsSecurity_TypesAndValues.hh"

#if TTCN3_VERSION != 50400
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace LibItsSecurity__Pixits {

/* Global variable declarations */

extern const CHARSTRING& PX__CERTIFICATE__POOL__PATH;
extern const CHARSTRING& PX__IUT__SEC__CONFIG__NAME;
extern const CHARSTRING& PX__IUT__DEFAULT__CERTIFICATE;
extern const INTEGER& PX__OTHER__ITS__AID;
extern const INTEGER& PX__WRONG__PROTOCOL__VERSION;
extern TTCN_Module module_object;

} /* end of namespace */

#endif