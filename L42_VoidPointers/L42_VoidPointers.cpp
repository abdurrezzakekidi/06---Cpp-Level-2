#include <iostream>

using namespace std;

int main()
{
    void * ptr;

    float f1 = 3.31;
    int x = 50;

    ptr = &f1;

    cout << ptr << endl;

    cout << *(static_cast <float*>(ptr)) << endl;

    ptr = &x;
    cout << ptr << endl;
    cout << *(static_cast <int*>(ptr)) << endl;

    cout << "_____________Test______________\n\n";
    char mark = 'A';
    int Number = 100;

    void* ptrChar = &mark;
    cout << "ptrChar Address: " << ptrChar << endl;
    cout << "ptrChar Value: " << *(static_cast <char*>(ptrChar)) << endl;

    void* ptrInt = &Number;
    cout << "ptrInt Address: " << ptrInt << endl;
    cout << "ptrInt Value: " << *(static_cast<int*>(ptrInt)) << endl;
    return 0;
    
}


