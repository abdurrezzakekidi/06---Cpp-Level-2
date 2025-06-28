#include <iostream>
#include <vector>

using namespace std;

// try-catch slows our programs, we should only use it in a situation we can't handle
// or have control on
int main()
{
    vector <int> num{ 1, 2, 3, 4, 5 };
    cout << num.at(2) << endl; // no errors

    try
    {
        cout << num.at(5);
    }
    catch (...)
    {
        cout << "Out Of Bound!!\n\n";
    }
    
}


