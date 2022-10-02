#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    char x, y;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            x = file.get();

            if(48 <= int(x) && int(x) <= 57)
            {
                do
                {
                    y = file.get();
                }
                while(48 > int(y) || int(y) > 57);
                
                int z = (int(x)-48)*10+(int(y)-48);

                if(65 <= z && z <= 90)
                    cout << char(z);
            }
        }
    file.close();

    return 0;
}
