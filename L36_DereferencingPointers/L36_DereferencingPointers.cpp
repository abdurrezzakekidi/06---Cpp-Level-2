#include <iostream>

using namespace std;

int main()
{
    
    int a = 10;

    cout << "a vlaue        = " << a << endl;
    cout << "a adress       = " << &a << endl;

    int * p;
    p = &a;

    cout << "Pointer Value  = " << p << endl;
    cout << "Value of the address tha pointer is pointiong to is " << *p << endl;

    *p = 20;

    cout << a << endl;
    cout << *p << endl;

    a = 30;

    cout << a << endl;
    cout << *p << endl;

    cout << endl;

    return 0;


}


