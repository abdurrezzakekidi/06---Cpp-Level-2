#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);// write mode
    if (MyFile.is_open())
    {
        string Line;

        for (string &Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }
        MyFile.close();

    }
}

int main()
{
    vector <string> vFileContent {"Ali", "Mahmood", "Abdurrezzak", "Kaan", "Emre"};
    SaveVectorToFile("MyFile.txt", vFileContent);

   

    return 0;
}


