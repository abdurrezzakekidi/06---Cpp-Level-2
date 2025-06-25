#include <iostream>

using namespace std;

int main()
{
	//declare an int pointer
	int* ptrX;

	//declare an float pointer
	float* ptrY;

	//dynamically allocate memeory
	// dynamic memory allocation, new can be used to allocate memory during runtime
	ptrX = new int;
	ptrY = new float;

	// assignig value to the memory
	*ptrX = 12;
	*ptrY = 58.24f;

	cout << *ptrX << endl;
	cout << *ptrY << endl;

	//deallocate memory
	delete ptrX;
	delete ptrY;

	return 0;


}


