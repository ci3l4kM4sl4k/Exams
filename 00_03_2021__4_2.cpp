//Calculates the total retail area of each gallery (as the sum of the areas of all premises in a given gallery) and the number of premises
//It also gives the name of the city with the gallery with the largest total area and the name of the city with the gallery
//with the smallest total area
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "galerie.txt";
    fstream file;
    string code, name, nameWithMin, nameWithMax;
    int a, b, sum, amount, sumMin=100000, sumMax=0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> code >> name;
            sum = 0;
            amount = 0;

            for(int i = 0; i < 70; i++)
            {
                file >> a >> b;

                sum += (a*b);

                if(a*b != 0)
                    amount++;
            }

            cout << name << " " << sum << " " << amount << endl;
            
            if(sum > sumMax)
            {
                nameWithMax = name;
                sumMax = sum;
            }

            if(sum < sumMin)
            {
                nameWithMin = name;
                sumMin = sum;
            }
        }
    file.close();

    cout << endl;
    cout << nameWithMax << " " << sumMax << endl;
    cout << nameWithMin << " " << sumMin << endl;

    return 0;
}
