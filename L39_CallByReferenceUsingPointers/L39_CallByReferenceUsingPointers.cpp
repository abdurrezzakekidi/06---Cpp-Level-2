#include <iostream>

using namespace std;

void SwapByReference(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void SwapByReferenceWithPointer(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10, b = 20;
	int x = 35, y = 55;

	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	SwapByReference(a, b);

	cout << "\nAfter swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "-------------------" << endl;

	cout << "Before Swapping (x,y)" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	SwapByReferenceWithPointer(&x, &y);  
	cout << "After Swapping (x,y)" << endl; // we send the address becuase function expect a pointer value
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;



	return 0;
}