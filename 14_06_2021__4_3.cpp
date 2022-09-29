//Lists middle letters of palindromes as well as words that would also form palindromes by cutting one letter from their beginning or their end
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "words.txt"; //name of file
    fstream file;
    string word;
    int i = 0, j = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            for (i = 0, j = word.length()-1; i < j; i++, j--) //checks if given word is a normal palindrome
                if (word[i] != word[j])
                    break;

            if (i >= j)
                cout << word[(word.length()/2)-1] << endl;
            ///////////////////////
            for (i = 1, j = word.length()-1; i < j; i++, j--) //checks if given word without its first letter is a palindrome
                if (word[i] != word[j])
                    break;

            if (i >= j)
                cout << word[(word.length()/2)] << endl;
            ///////////////////////
            for (i = 0, j = word.length()-2; i < j; i++, j--) //checks if given word without its last letter is a palindrome
                if (word[i] != word[j])
                    break;

            if (i >= j)
                cout << word[(word.length()/2)-1] << endl;
        }
    file.close();

    return 0;
}
