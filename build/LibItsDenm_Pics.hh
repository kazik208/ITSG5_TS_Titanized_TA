// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/5 R4A
// for Aitor (aitorkun@aitorkun-HP-EliteBook-2530p) on Tue Feb 16 10:46:43 2016

// Copyright (c) 2000-2015 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef LibItsDenm__Pics_HH
#define LibItsDenm__Pics_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>

#if TTCN3_VERSION != 50400
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace LibItsDenm__Pics {

/* Global variable declarations */

extern const INTEGER& PICS__DENM__DEFAULT__EXPIRY__TIME;
extern const BOOLEAN& PICS__DENM__GENERATION;
extern const BOOLEAN& PICS__DENM__UPDATE;
extern const BOOLEAN& PICS__DENM__REPETITION;
extern const BOOLEAN& PICS__DENM__CANCELLATION;
extern const BOOLEAN& PICS__DENM__NEGATION;
extern const BOOLEAN& PICS__DENM__RECEPTION;
extern const BOOLEAN& PICS__DENM__KAF;
extern const BOOLEAN& PICS__IMPACT__REDUCTION;
extern TTCN_Module module_object;

} /* end of namespace */

#endif