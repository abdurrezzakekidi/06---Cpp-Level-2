#include <iostream>
#include <fstream>
#include <string>

#include "D:/MyCPP_Libs/FileLib.h"

using namespace std;

void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode
    if (MyFile.is_open())
    {

        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
        }
      
}

int main()
{
    FileLib::PrintFileContent("MyFile.txt");

    return 0;
}


