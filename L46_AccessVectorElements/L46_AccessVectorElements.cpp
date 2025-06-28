#include <iostream>
#include <vector>

using namespace std;

int main()
{

    /*
    Using .at() with vectors is better becuase if we got out of range,
    we get an error or exception. accessing through index warns us about of
    range, but gives us garabge data in memory.
     */
    vector <int> num{ 1, 2, 3, 4, 5 };

    cout << "\n\n using .at(i) \n";
    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Element at Index 4: " << num.at(4) << endl;

    cout << "\n\n using[i]\n";
    cout << "Element at Index 0: " << num[0] << endl;
    cout << "Element at Index 2: " << num[2] << endl;
    cout << "Element at Index 4: " << num[4] << endl;

    return 0;
    
}

