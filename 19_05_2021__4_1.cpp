//an algorithm that calculates the total length of the string after executing all instructions from the file 'instructions.txt'
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instructions.txt"; //name of file
    fstream file;
    string word;
    int length = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(word == "ADD") //if instruction says to add a letter to string
                length++;

            if(word == "DELETE") //if instruction says to delete a letter from string
                length--;
        }
    file.close();

    cout << "Length of the string: " << length;

    return 0;
}
