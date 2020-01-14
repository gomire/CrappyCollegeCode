// W2_InputOutput_Mutumanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program determines the number of potential team arrangements using Fectorial of people and groups.
//CSIS 111-D02 LOU

//Source google results for error message (arithmetic overflow): https://devblogs.microsoft.com/cppblog/arithmetic-overflow-checks-in-c-core-check/ 
//Source of frastration: took me a while to fix ** Build: 0 succeeded, 1 failed, 0 up-to-date, 0 skipped**


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Global declarations: Constants and type definitions
//Function prototypes


int main()
{
	//Name and lab number
	cout << "Marshall Mutumanje -- Lab Number 2 " << endl << endl;

	//Variable declarations (double for double precision)
	double n = 18.0;
	double r = 3.0;

	//Program logic
	//Factorial calculation (n!/r!(n-r)!)
	double n_r = n - r;                                                                                                                                                          //n minus r 
	double nFactorial = (2.0) * (3.0) * (4.0) * (5.0) * (6.0) * (7.0) * (8.0) * (9.0) * (10.0) * (11.0) * (12.0) * (13.0) * (14.0) * (15.0) * (16.0) * (17.0 * n);                      // n! Factorial of 18 broken out
	double rFactorial = (2.0 * r);                                                                                                                                               // r! Factorial of 3 broken out
	double nSrFactorial = (2.0) * (3.0) * (4.0) * (5.0) * (6.0) * (7.0) * (8.0) * (9.0) * (10.0) * (11.0) * (12.0) * (13.0) * (14.0 * n_r);                                                              // n-r! Factorial of n minus r broken out
	double nDrFactorial = (2.0) * (3.0) * (4.0) * (5.0) * (6.0) * (7.0) * (8.0) * (9.0) * (10.0) * (11.0) * (12.0) * (13.0) * (14.0) * (15.0) * (16.0) * (17.0 * n) / (2.0 * r); //nfactorial divided by rFactorial 

	//Using std output for instep and final result
	cout << "The No. of People in your class : " << n << endl;
	cout << "The number of teams : " << r << endl;
	cout << "Factorial of n : " << nFactorial << endl;
	cout << "Factorial of r : " << rFactorial << endl;
	cout << "The No. potential team arrangements is " << (nDrFactorial * nSrFactorial) << endl;



	//Closing program statements
	system("pause");
	return 0;
}
//Function definitions