#include <iostream>
#include <vector>
#include "D:\MyCPP_Libs\MyInputsLib.h";

using namespace std;

void ReadNumbers(vector <int> & vNumbers)
{
	char ReadMore = 'Y';
	int Number = 0;

	while (ReadMore == 'Y' || ReadMore == 'y')
	{

		Number = MyInputLib::ReadInvalidNumber();
		vNumbers.push_back(Number);

		cout << "Do you want to add another number? (Y/N): ";
		cin >> ReadMore;
	}
}

void PrintVNumbers(const vector <int> & vNumbers)  
{
	cout << "\n\nNumbers vector: \n";

	for (const int Number : vNumbers)
	{
		cout << Number << endl;
	}
	cout << endl;
}


int main()
{
	/*
	vector <int> vNumbers;
	
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	vNumbers.push_back(60);
	vNumbers.push_back(70);
	vNumbers.push_back(80);
	vNumbers.push_back(90);
	

	cout << "Numbers Vevtor: \n\n";
	// ranged loop
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
	cout << endl;

	*/

	vector<int> numbers;

	ReadNumbers(numbers);
	PrintVNumbers(numbers);


	return 0;


}