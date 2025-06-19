#include <iostream>



using namespace std;




int main()
{
	int Array1[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	for (int n : Array1)
	{
		cout << n << endl;
	}
	cout << "__________________________\n\n";

	string name = "Abdurrezzak Ekidi";
	for (char c : name)
	{
		cout << c << endl;
	}
	return 0;

}