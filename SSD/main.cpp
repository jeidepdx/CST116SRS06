// main.cpp : Defines the entry poidnt for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Fearow_SSD.h"
#include "Dull_function.h"

int main()
{
	const int Lillipup_Data[20]{ 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };
	const int Fearow_Data[18]{ 5, 98, 150, 205, 578, 45, 21, 68, 758, 10, 54, 698, 743, 521, 419, 624, 32, 46 };

	// running the array with my data through both functions
	double My_Answer{ Fearow_SSD(18, Fearow_Data) };
	double Partner_Answer{ Dull_function(18, Fearow_Data) };

	const double tolerance{ 0.0001 };
	const bool MyDataResultsMatch{ My_Answer <= Partner_Answer + tolerance && My_Answer >= Partner_Answer - tolerance };

	// running the array with my partner's data through both functions
	My_Answer = Fearow_SSD(20, Lillipup_Data);
	Partner_Answer = Dull_function(20, Lillipup_Data);


	const bool PartnerDataResultsMatch{ My_Answer <= Partner_Answer + tolerance && My_Answer >= Partner_Answer - tolerance };

	if(MyDataResultsMatch == true && PartnerDataResultsMatch == true)
	{
		std::cout << "Results match!" << std::endl;
	}
	else
	{
		std::cout << "Results do not match." << std::endl;
	}

	return 0;


}