////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     DataVector.cpp (data)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "DataVector.h"

namespace ell
{
namespace data
{
    void operator+=(math::RowVectorReference<double> vector, const IDataVector& dataVector)
    {
        dataVector.AddTo(vector);
    }

    double operator*(const IDataVector& dataVector, math::ColumnConstVectorReference<double> vector)
    {
        return dataVector.Dot(vector);
    }
}
}