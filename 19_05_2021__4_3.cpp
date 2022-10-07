//an algorithm that calculates which letter is most often entered after order "ADD", gives that letter and how many times it is added
#include <iostream>
#include <fstream>
using namespace std;

///////////////////////////////////////////////function that fills array (letters) and returns size of this array;
int import(string letters[], string fileName) //array that will be filled with matching letters, name of file
{
    fstream file;
    string word, previousWord = ""; //presently used word or letter, previously used letter or word
    int i = 0; //amount of items in array

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(previousWord == "ADD") //seeks only letters that occure after word "ADD"
            {
                letters[i] = word;
                i++;
            }

            previousWord = word; 
        }
    file.close();

    return i; //returns the size of array
}
//////////////////////////////////////////////

///////////////////////////////////////function that finds the letter that most often occure in the array
void letter(string letters[], int size) //array where the most commonly used letter will be seeked, size of array
{
    string theLetter; //most commonly used letter
    int maxCount = 0; //number of the most commonly used letter

    for(int j = 0; j < size; j++)
    {
        int count = 0; //counts every occurence of current letter

        for(int t = 0; t < size; t++) //checks for every item of array how many times it occured
            if(letters[j] == letters[t])
                count++;

        if(count > maxCount) //checks if current letter occured more often than previous most commonly used letter
        {
            maxCount = count;
            theLetter = letters[j];
        }
    }

    cout << theLetter << " " << maxCount; //reads the results
}
///////////////////////////////////////

int main()
{
    string fileName = "instructions.txt"; //name of file
    string letters[1000]; //array for every matching letter (it must be same, or more, than the possible letters in given file)

    int size = import(letters, fileName); //function that fills array (letters) and returns size of this array;

    letter(letters, size); //function that finds the letter that most often occure in the array

    return 0;
}
