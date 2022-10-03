#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "napisy.txt";
    fstream file;
    char x, y;
    int n;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            n = 0;

            do
            {
                x = file.get();
                n++;
            }
            while(48 > int(x) && n < 50 || int(x) > 57 && n < 50);
                
            do
            {
                y = file.get();
                n++;
            }
            while(48 > int(y) && n < 50 || int(y) > 57 && n < 50);

            if(n < 50)
            {    
                int z = (int(x)-48)*10+(int(y)-48);

                if(65 <= z && z <= 90)
                    cout << char(z);
            }
            else if(48 <= int(x) && n < 50 && int(x) > 57)
            {    
                int z = int(x)-48;

                if(65 <= z && z <= 90)
                    cout << char(z);
            }              
        }
    file.close();

    return 0;
}
