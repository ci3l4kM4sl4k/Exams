//Calculates the total retail area of each gallery (as the sum of the areas of all premises in a given gallery) and the number of premises
//It also gives the name of the city with the gallery with the largest total area and the name of the city with the gallery
//with the smallest total area
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "galleries.txt"; //name of file
    fstream file;
    string cityNameWithSmallest, cityNameWithLargest;
    int smallestSurface=100000, largestSurface=0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            string countryCode, cityName;
            file >> countryCode >> cityName;

            int a, b, surface = 0, amount = 0;
            for(int i = 0; i < 70; i++)
            {
                file >> a >> b;

                surface += (a*b);

                if(a*b != 0)
                    amount++;
            }

            cout << cityName << " " << surface << " " << amount << endl; //writes name of city with surface of its galleries and amount of premises
            
            if(surface > largestSurface) //checks whether current surface is new largest surface
            {
                cityNameWithLargest = cityName;
                largestSurface = surface;
            }

            if(surface < smallestSurface) //checks whether current surface is new smallest surface
            {
                cityNameWithSmallest = cityName;
                smallestSurface = surface;
            }
        }
    file.close();

    cout << endl;
    cout << cityNameWithLargest << " " << largestSurface << endl;
    cout << cityNameWithSmallest << " " << smallestSurface << endl;

    return 0;
}
