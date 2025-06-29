#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    /*
        Append Mode: Keeps our old data in the file, and adds new data
        to the end of the file.
    */

    /*
        Here our code says, open MyFile.txt in append mode,
        if not exists create and open for write mode. In next time,
        the file will open in append mode, append always has priority over write
    */

    fstream MyFile;

    MyFile.open("MyFile.txt",ios::out | ios::app); //append Mode

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is a new line2\n";
        MyFile << "...\n";
        
        MyFile.close();
    }

    return 0;
}


