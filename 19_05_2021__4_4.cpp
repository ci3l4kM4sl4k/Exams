//Returns a string that will be generated after executing all instructions in the file 'instructions.txt'
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instructions.txt"; //name of file
    fstream file;
    string instruction; //variable for instruction
    char letter, word[1000]; //letter that will be added or changed, word that will be created
    int i = 0, n = 0; //variable to see if we took 2 items from file, variable for place of the letter in the word

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            if(i % 2 == 0) //if even then imports instruction
            {
                file >> instruction;
            }
            else //if odd then imports letter, after that it makes changes to "word"
            {
                file >> letter;

                if(instruction == "ADD")
                {
                    word[n] = letter; //adds letter to the word
                    n++;
                }

                if(instruction == "CHANGE")
                    word[n-1] = letter; //changes the last letter to given new

                if(instruction == "DELETE")
                    n -= int(letter)-48; //goes back as many times as it was written

                if(instruction == "MOVE")
                {
                    for(int j = 0; j < n; j++) //changes the first item from the left that is equal to given letter
                        if(word[j] == letter)
                        {
                            word[j] = char(int(word[j])+1);

                            if(int(word[j]) > 90) //if it was 'Z' then it must be changed to 'A'
                                word[j] = char(int(word[j])-26);

                            break;
                        }
                }
            }

            i++;
        }
    file.close();

    cout << word; //reads the final word

    return 0;
}
