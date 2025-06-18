# include <iostream>

#include "MyLib.h";
#include "MyInputLib.h";

using namespace std;



int main()
{
	/*
	MyLib::Test();
	cout << MyLib::Sum2Numbers(10, 15) << endl;

	int Number = MyInputLib::ReadNumber();
	cout << Number;
	*/

	 cout <<"Random Number: " << MyInputLib::RandomNumber(1, 10) << endl;
	 
	 int PositiveNumber = MyInputLib::ReadPositiveNumber("Please enter a positive number?");
	 cout << "\nPositive Number: "<< PositiveNumber << endl;
	 cout << "Reverse Number: " << MyInputLib::ReverseNumber(PositiveNumber) << endl;
	return 0;
}

