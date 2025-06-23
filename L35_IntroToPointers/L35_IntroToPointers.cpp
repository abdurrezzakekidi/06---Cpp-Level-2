#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 50;

	cout << "a vlaue       = " << a << endl;
	cout << "a adress      = " << &a << endl;

	int* p;
	p = &a;
	p = &b;


	cout << "Pointer Value = " << p << endl;

	//cout << &p << endl;
}


