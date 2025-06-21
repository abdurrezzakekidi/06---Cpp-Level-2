#include <iostream>

using namespace std;

void MyFunc()
{
     int Number = 1;

    cout << " Value of Number: " << Number << endl;

    Number++;

}

void MyFuncStatic()
{
    static int Number = 1;

    cout << " Value of Number: " << Number << endl;

    Number++;

}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();
    cout << "\n_____________________________________\n";

    MyFuncStatic();
    MyFuncStatic();
    MyFuncStatic();

    
}


