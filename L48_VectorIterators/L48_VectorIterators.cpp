#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> num{ 1, 2, 3, 4, 5 };

	// declare iterator
	vector <int>::iterator iter;

	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter << " ";
		//cout << iter; // gives an error
		cout << &(*iter); // dereference to get the value then get its address 
	}
   
}


