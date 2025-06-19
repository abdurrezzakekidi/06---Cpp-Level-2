#include <iostream>

using namespace std;

void Function2();


void Function4()
{
    cout << "Hi I'm function4 " << endl;
}

void Function3()
{
    Function4();
}

void Function2()
{
    Function3();
}

void Function1()
{
    Function2();
    Function4();
}

int main()
{
    /*
    F12: Go to function definition.
    Ctrl + F12: Go to function declaration.
    Shift + F12: Search for a function and get all references.
    Alt + F12: Peek Definition with going to the function.
    Ctrl + R: Rename a function with all it’s definitions in the code.
*/

    Function1();
    return 0;

}


