//Finds the longest sequence of consecutive instructions of the same kind
//As a result, it gives the type of instruction and its amount
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instructions.txt"; //name of file
    fstream file;
    string word, lastInstruction = "x", instruction; //imported string, previously used instruction, most commonly used instruction used one after another
    int max = 0, currently, n = 0; //amount of most commonly used consecutive instruction, quantity of the instruction currently used, the number of the imported words

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(n % 2 == 0) //needs only the first, and after that every secound word;
            {
                if(word == lastInstruction) //every time the same instruction is used consecutively
                {
                    currently++;

                    if(max < currently)
                    {
                        instruction = word;
                        max = currently;
                    }
                }
                else //when a new instruction is used
                {
                    lastInstruction = word;
                    currently = 1;
                }
            }

            n++;
        }
    file.close();

    cout << "The type of instruction - " << instruction << ", its amount - " << max << ".";

    return 0;
}
