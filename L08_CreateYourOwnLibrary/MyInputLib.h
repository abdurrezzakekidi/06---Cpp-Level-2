#pragma once

#include <iostream>
using namespace std;

namespace MyInputLib 
{

	int ReadNumber()
	{
		int Number;
		cout << "Please Enter Your Number?\n";
		cin >> Number;

		return Number;

	}

	int RandomNumber(int From, int To)
	{

		int randNum = rand() % (To - From + 1) + From;
		return randNum;
	}

	int ReadPositiveNumber(string Message)
	{
		float Number = 0;

		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);
		return Number;
	}

	int ReverseNumber(int Number)
	{
		int Remainder = 0;
		int Number2 = 0;


		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Number2 = Number2 * 10 + Remainder;
		}

		return Number2;
	}

}