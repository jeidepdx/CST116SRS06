// main.cpp : Defines the entry poidnt for the console application.
//

#include "stdafx.h"
#include <cassert>
#include "Fearow_SSD.h"
#include <iostream>

int main()
{
	const int Lillipup_Data[20]{ 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };
	const int Fearow_Data[18]{ 5, 98, 150, 205, 578, 45, 21, 68, 758, 10, 54, 698, 743, 521, 419, 624, 32, 46 };
	// const int Eide_Data[18]{ 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5 };

	const double tolerance{ 0.0001 };

	double My_Answer{ Fearow_SSD(18, Fearow_Data) };
	double Partner_Answer{ Fearow_SSD(20, Fearow_Data) }; // this is a placeholder while I wait for my other partner to finish their function.

	const bool MyDataResultsMatch{ My_Answer <= Partner_Answer + tolerance && My_Answer >= Partner_Answer - tolerance };

	My_Answer = Fearow_SSD(20, Lillipup_Data);
	Partner_Answer = Fearow_SSD(20, Lillipup_Data); // this is a placeholder while I wait for my other partner to finish their function.

	const bool PartnerDataResultsMatch{ My_Answer <= Partner_Answer + tolerance && My_Answer >= Partner_Answer - tolerance };

	if(MyDataResultsMatch == true && PartnerDataResultsMatch == true) std::cout << "Results match!" << std::endl;
		else std::cout << "Results do not match." << std::endl;

	/* I am still waiting on my partners function. 
	The above placeholders will be replaced and the other comparisions will be added after I receive it. */

	return 0;


}