#include <iostream>

using namespace std;

struct stEmployee
{
    string Name;
    int Age;
    float Salary;
};

int main()
{
    stEmployee Employee1, * ptr;

    Employee1.Name = "Abdurrezzak Ekidi";
    Employee1.Age = 21;
    Employee1.Salary = 7500;

    cout <<"Name: " << Employee1.Name << endl;
    cout <<"Age: " << Employee1.Age << endl;
    cout <<"Salary: " << Employee1.Salary << endl;

    ptr = &Employee1;

    cout << "\nUsing Pointer:\n";
    cout << "Name: " << ptr->Name << endl;
    cout << "Age: " << ptr->Age << endl;
    cout << "Salary: " << ptr->Salary << endl;

    cout << "\n\n__________________________________________________\n\n";

    cout << "The address of the struct through &Employee = " << &Employee1 << endl;
    cout << "The address of the struct through ptr =       " << ptr << endl;

    cout << "Address of variable name from the structs = " << &Employee1.Name << endl;
    cout << "Address of variable Age from the structs  = " << &Employee1.Age << endl;
    cout << "Address of variable Salary from the structs = " << &Employee1.Salary << endl;

    // ptr->Name is equivalent to *(ptr).Name but not works in syntax
    cout << "Address of variable name from the pointer = " << &ptr->Name << endl;
    cout << "Address of variable name from the pointer = " << &((*ptr).Name) << endl;


    return 0;

}


