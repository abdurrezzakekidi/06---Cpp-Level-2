#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num{ 1, 2, 3, 4, 5 };

    cout << "Initail Vector: ";

    for (const int& i : num) {
        cout << i << " ";
    }

    cout << "\n\nUpdated Vector: ";

    for (int& i : num) {
        i = 20;
        cout << i << " ";
    }

    num[4] = 40;
    num.at(2) = 80;
    num.at(4) = 90;



    cout << "\n\n Updated Vector: ";

    for (const int& i : num) {
        cout << i << " ";
    }
    return 0;
}




