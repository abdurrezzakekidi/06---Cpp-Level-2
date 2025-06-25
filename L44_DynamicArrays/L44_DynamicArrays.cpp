#include <iostream>

using namespace std;

int main()
{
    int num ;
    cout << "Please enter total number of students: ";
    cin >> num;

    float* ptr;

    //memory allocation of num number of students
    ptr = new float[num];

    cout << "Please enter grades of students." << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\n Displaying grades of students." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
        //cout << "Address of Student" << i + 1 << ": " << (ptr + i) << endl;
    }

    

    //ptr memory released
    delete[] ptr;


    
}


