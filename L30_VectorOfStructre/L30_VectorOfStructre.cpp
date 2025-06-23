#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    float Salary;
};

void ReadEmployees(vector <stEmployee> & vEmployees)
{
    stEmployee tempEmloyee;

    char ReadMore = 'Y';
    

    while (ReadMore == 'Y' || ReadMore == 'y')
    {
        cout << "Enter First Name:";
        cin >> tempEmloyee.FirstName;

        cout << "\nEnter Last Name:";
        cin >> tempEmloyee.LastName;

        cout << "\nEnter Salary:";
        cin >> tempEmloyee.Salary;

        vEmployees.push_back(tempEmloyee);

        cout << "Do you want to read more employees? (Y/N):\n";
        cin >> ReadMore;
    }
}

void PrintEmployees(const vector <stEmployee> & vEmployees)
{
    cout << "\nEmployees Vector: \n\n";

    for (const stEmployee Employee : vEmployees)
    {
        cout << "FirstName: " << Employee.FirstName << endl;
        cout << "LastName : " << Employee.LastName << endl;
        printf("Salary    : %.2f$\n", Employee.Salary);
        cout << endl;
    }
    cout << endl;
}

int main()
{
    
    vector <stEmployee> vEmployees;

    stEmployee tempEmployee;


    tempEmployee.FirstName = "Abdurrezzak";
    tempEmployee.LastName = "Ekidi";
    tempEmployee.Salary = 5000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Muhammed";
    tempEmployee.LastName = "Khalil";
    tempEmployee.Salary = 3500;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Polat";
    tempEmployee.LastName = "Alemdar";
    tempEmployee.Salary = 75000;
    vEmployees.push_back(tempEmployee);

    cout << "Employees Vector: \n\n";

    for (stEmployee & Employee : vEmployees)
    {
        cout << "FirstName: " << Employee.FirstName << endl;
        cout << "LastName : " << Employee.LastName << endl;
        cout << "Salary   : " << Employee.Salary << endl;
        cout << endl;
    }
    cout << endl;
    

    cout << "--------------------\n" << "HOMEWORK\n" << "--------------------\n" << endl;

    vector <stEmployee> vEmployees2;
    ReadEmployees(vEmployees2);
    PrintEmployees(vEmployees2);

    return 0;

}




