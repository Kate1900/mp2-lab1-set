#include "tratio.h"

TRatio::TRatio(int n, int d)
{
    if (d == 0) throw "Can't have denominator as zero!";

    numerator_ = n;
    denominator_ = d;
}

int TRatio::GetNumerator()
{
    return numerator_;
}

int TRatio::GetDenominator()
{
    return denominator_;
}
