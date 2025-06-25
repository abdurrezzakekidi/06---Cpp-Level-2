#include <iostream>

using namespace std;


int main()
{
	int arr[5] = { 12, 40, 56, 78, 82 };
	int* ptr;
	ptr = arr;

	// ptr is equivalent to &arr[0]
	// ptr + 1 is equivalent to &arr[1]
	// ptr + 2 is equivalent to &arr[2]
	// ptr + 3 is equivalent to &arr[3]

	cout << "Addresses are: \n\n";
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;
	cout << ptr + 4 << endl;
	
	cout << "\nValues are: \n";
	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;
	cout << *(ptr + 4) << endl;
	
	cout << "-------------" << endl;

	for (int i = 0; i <= 4; i++)
	{
		cout << "Value of arr[" << i << "] = " << ptr[i] << endl;
		cout << "Value of arr[" << i << "] = " << *(ptr + i) << endl;
	}

	cout << "-------------" << endl;

	for (int i = 0; i <= 4; i++)
	{
		cout << "Address of arr[" << i << "] = " << (ptr + i) << endl;
	}
	return 0;
}


