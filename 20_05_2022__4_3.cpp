//It tells how many triples of numbers there are (each different, but each successive is a multiple of the previous one)
//and the corresponding fives of numbers among the numbers in the file 'numbers.txt'.
//Writes all triples to the file 'triples.txt', each on a separate line.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt", fileName1 = "trujki.txt";
    fstream file, file1;
    int arr[200], amountThrees = 0, amountFives = 0;

    file.open(fileName, ios::in);
        for(int i = 0; i < 200; i++)
            file >> arr[i];
    file.close();

    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 200; j++)
            for(int z = 0; z < 200; z++)
                if(arr[z] % arr[j] == 0 && arr[j] % arr[i] == 0 && arr[i] != arr[j] && arr[j] != arr[z])
                {
                    file1.open(fileName1, ios::app);
                        file1 << arr[i] << "\t" << arr[j] << "\t" << arr[z] << endl;
                    file1.close();
                    amountThrees++;

                    for(int t = 0; t < 200; t++)
                        for(int y = 0; y < 200; y++)
                            if(arr[y] % arr[t] == 0 && arr[t] % arr[z] == 0 && arr[z] != arr[t] && arr[t] != arr[y])
                            {
                                amountFives++;
                            }
                }

    cout << "Amount of threes: " << amountThrees << endl;
    cout << "Amount of fives: " << amountFives << endl;

    return 0;
}
