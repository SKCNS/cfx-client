// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/test/translator_test_object_child_ctocpp.h"
#include "libcef_dll/ctocpp/test/translator_test_object_child_child_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefTranslatorTestObjectChild> CefTranslatorTestObjectChild::Create(
    int value, int other_value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_translator_test_object_child_t* _retval =
      cef_translator_test_object_child_create(
      value,
      other_value);

  // Return type: refptr_same
  return CefTranslatorTestObjectChildCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

int CefTranslatorTestObjectChildCToCpp::GetOtherValue() {
  cef_translator_test_object_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_other_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_other_value(_struct);

  // Return type: simple
  return _retval;
}

void CefTranslatorTestObjectChildCToCpp::SetOtherValue(int value) {
  cef_translator_test_object_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_other_value))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_other_value(_struct,
      value);
}

int CefTranslatorTestObjectChildCToCpp::GetValue() {
  cef_translator_test_object_t* _struct =
      reinterpret_cast<cef_translator_test_object_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_value(_struct);

  // Return type: simple
  return _retval;
}

void CefTranslatorTestObjectChildCToCpp::SetValue(int value) {
  cef_translator_test_object_t* _struct =
      reinterpret_cast<cef_translator_test_object_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_value))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_value(_struct,
      value);
}


// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestObjectChildCToCpp::CefTranslatorTestObjectChildCToCpp() {
}

template<> cef_translator_test_object_child_t* CefCToCpp<CefTranslatorTestObjectChildCToCpp,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::UnwrapDerived(CefWrapperType type,
    CefTranslatorTestObjectChild* c) {
  if (type == WT_TRANSLATOR_TEST_OBJECT_CHILD_CHILD) {
    return reinterpret_cast<cef_translator_test_object_child_t*>(
        CefTranslatorTestObjectChildChildCToCpp::Unwrap(
        reinterpret_cast<CefTranslatorTestObjectChildChild*>(c)));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefTranslatorTestObjectChildCToCpp,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefTranslatorTestObjectChildCToCpp,
    CefTranslatorTestObjectChild,
    cef_translator_test_object_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_OBJECT_CHILD;
