// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "sort_record.hpp"

namespace djinni_generated {

struct NativeSortRecord
{
    using CppType = ::textsort::SortRecord;
    using JsType = em::val;
    using Boxed = NativeSortRecord;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

} // namespace djinni_generated
