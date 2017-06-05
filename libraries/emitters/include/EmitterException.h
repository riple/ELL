////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     EmitterException.h (emitters)
//  Authors:  Umesh Madan
//
////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Exception.h"

namespace ell
{
namespace emitters
{
    ///<summary>A list of error codes thrown by code emitters</summary>
    enum class EmitterError
    {
        // Unexpected error
        unexpected = 0,
        // General not supported error
        notSupported,
        // Unknown ValueType
        valueTypeNotSupported,
        // Unknown TypedOperator
        operatorTypeNotSupported,
        // Unknown TypedComparison
        comparisonTypeNotSupported,
        // Binary Operators - operation not supported
        binaryOperationTypeNotSupported,
        // Unary Operators - operation not supported
        unaryOperationNotSupported,
        // Binary predicates - operation not supported
        binaryPredicateTypeNotSupported,
        // Unknown Variable type
        variableTypeNotSupported,
        // Invalid index into a vector
        indexOutOfRange,
        // Function not found
        functionNotFound,
        // Bad function definition
        badFunctionDefinition,
        // function called with incorrect arguments
        badFunctionArguments,
        // Write to output stream failed
        writeStreamFailed,
        // Parser error
        parserError,
        // Duplicate symbol error
        duplicateSymbol,
        // Expected a vector variable, but a scalar was encountered
        vectorVariableExpected,
        // Expected a scalar input, but a vector was encountered
        scalarInputsExpected,
        // Expected a scalar output, but a vector was encountered
        scalarOutputsExpected,
        // Expected vector input of size 2
        binaryInputsExpected,
        // Unknown VariableScope
        variableScopeNotSupported,
    };

    using EmitterException = utilities::ErrorCodeException<EmitterError>;
}
}
