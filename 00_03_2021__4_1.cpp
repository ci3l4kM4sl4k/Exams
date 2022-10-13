//Function that determines the number of cities in which galleries will be built from the 'galleries.txt' file for each country
#include <iostream>
#include <fstream>
using namespace std;

////////////////////////////////////////////algorithm that counts how many times value appears in file
void count(string fileName, string countryCode)
{
    fstream file;
    string line, newCountryCode, countryCode1, countryCode2, countryCode3; //variable for: whole line in file, whole country code, first and secound and third character of line
    int count = 0; //variable for how many times given code appears in file

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            getline(file, line);
            countryCode1 = line[0];
            countryCode2 = line[1];
            countryCode3 = line[2];
            
            if(countryCode2 != " ") //checks amount of letters in country code
                newCountryCode = countryCode1 + countryCode2 + countryCode3;
            else
                newCountryCode = countryCode1 + countryCode2;

            if(countryCode == newCountryCode) //adds to its amount every time it is found
                count ++;
        }
    file.close();
    
    cout << countryCode << " " << count << endl;
}
///////////////////////////////////////////////////

/////////////////////////////////imports array from file and returns actual size of array (name of file, array that will overwritten)
int import(string fileName, string array[])
{
    fstream file; //variable to open file
    string line, countryCode1, countryCode2, countryCode3; //variable for: whole line in file, first and secound and third character of line
    int i = 0; //counts the exact size of array

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            getline(file, line);
            countryCode1 = line[0];
            countryCode2 = line[1];
            countryCode3 = line[2];
        
            if(countryCode2 != " ") //checks amount of letters in country code
                array[i] = countryCode1 + countryCode2 + countryCode3;
            else
                array[i] = countryCode1 + countryCode2;

            i++;
        }
    file.close();

    return i;
}
/////////////////////////////////

///////////////////////////////////cuts out duplicate values
void cut(string array[], int size)
{
    for(int i = 0; i < size; i++)
        for(int j = i+1; j < size; j++)
            if(array[i] == array[j])
                array[j] = "";
}
////////////////////////////////////

int main()
{
    string fileName = "galleries.txt", array[50]; //name of file, array for every country code
    int size; //this will be variable for the actual size of array

    size = import(fileName, array); //imports array from file and returns actual size of array

    cut(array, size); //cuts out duplicate values

    for(int j = 0; j < size; j++) //for every value from array count how many times every code appears in file
        if(array[j] != "")
            count(fileName, array[j]);

    return 0;
}
