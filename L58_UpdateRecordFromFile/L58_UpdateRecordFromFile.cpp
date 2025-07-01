#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void printFileContent(const string& fileName)
{
    ifstream MyFile(fileName); // read mode

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
    else
    {
        cout << "Unable to open file: " << fileName << endl;
    }
}

void LoadDataFromFileToVector(const string& filePath, vector<string>& vFileContent)
{
    ifstream file(filePath); // read mode

    if (!file.is_open())
    {
        cout << "Invalid path or file doesn't exist: " << filePath << endl;
        return;
    }

    string line;
    while (getline(file, line))
    {
        vFileContent.push_back(line);
    }
    file.close();
}

void SaveVectorToFile(const string& fileName, const vector<string>& vFileContent)
{
    ofstream MyFile(fileName); // write mode

    if (MyFile.is_open())
    {
        for (const string& Line : vFileContent)
        {
            if (!Line.empty())
            {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
    else
    {
        cout << "Unable to open file for writing: " << fileName << endl;
    }
}

void UpdateRecordInFile(const string& fileName, const string record, string UpdateTo)
{
    vector<string> vFileContent;
    LoadDataFromFileToVector(fileName, vFileContent);

    for (string & line : vFileContent)
    {
        if (line == record)
        {
            line = UpdateTo; 
        }
    }

    SaveVectorToFile(fileName, vFileContent);
}

int main()
{
    const string fileName = "Name.txt";

    cout << "FILE CONTENT:" << endl;
    printFileContent(fileName);

    UpdateRecordInFile(fileName, "Ali", "Mustafa");

    cout << "\n\nUPDATED FILE CONTENT:\n";
    printFileContent(fileName);

    return 0;
}
