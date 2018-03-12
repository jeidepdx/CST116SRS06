// Fearow_SSD.cpp : function Fearow_SSD returns the sample standard deviation for an array of integers.

#include "stdafx.h"
#include <cmath>
#include "Fearow_SSD.h"

double Fearow_SSD(const size_t ArraySize, const int Array[])
{
	int ArraySum{0};
	for (size_t i = 0; i < ArraySize; i++)
	{
		ArraySum += Array[i];
	}

	const double ArrayMean{ (ArraySum*1.0 / ArraySize) };

	double SumOfSquares{0};
	for (size_t i = 0; i < ArraySize; i++)
	{
		SumOfSquares += (Array[i] - ArrayMean)*(Array[i] - ArrayMean);
	}

	SumOfSquares = SumOfSquares / (ArraySize - 1);

	return sqrt(SumOfSquares);

}
