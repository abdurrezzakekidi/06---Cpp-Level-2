#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
        Write Mode: Erases old data in a file and replace them with
        the new lines or data.
    */
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out); //write Mode

    if (MyFile.is_open())
    {
        MyFile << "Abdurrezzak\n";
        MyFile << "Muhammed\n";
        MyFile << "Seda\n";

        MyFile.close();
    }

    return 0;
}


