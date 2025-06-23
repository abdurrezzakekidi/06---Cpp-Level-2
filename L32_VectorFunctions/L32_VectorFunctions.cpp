#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers;

	// adding elements
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	//vNumbers.clear();
	
	if (vNumbers.size() > 0)
	{
		// we should handle these 2 lines becuase if the stack is empty it will raise an execption
		cout << "First Element: " << vNumbers.front() << endl;
		cout << "Last Element: " << vNumbers.back() << endl;
	}

	cout << "Size: " << vNumbers.size() << endl;

	//check the overall size of a vector
	cout << "Capacity: " << vNumbers.capacity() << endl;

	//returns 1 (true) if the vector is empty, otherwise returns 0 (false)
	cout << "Empty: " << vNumbers.empty() << endl;




	
	

	

	return 0;
}