#include <iostream>

using namespace std;

//function declaration
void add(int, int);

int main()
{
	add(20, 45);

	return 0;

}
//function defination
void add(int a, int b)
{
	cout << "Sum:" << (a + b);
}


