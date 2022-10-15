// Algorithm that calculates in which city will the gallery with the largest number of different types of premises be built
//and in which the gallery with the smallest number of different types of premises?
//We will say that two premises are of the same type if their surface area is the same.
#include <iostream>
#include <fstream>
using namespace std;

///////////////////////////////////sorts array
void sort(int array[], int size)
{
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size-1; j++)
            if(array[j] > array[j+1])
                swap(array[j],array[j+1]);
}
/////////////////////////////////////

///////////////////////////////counts amount of different premises
int count(int array[], int size)
{
    int x = 0, last = 0;

    for(int i = 0; i < size; i++)
        if(array[i] != last)
        {
            last = array[i];
            x++;
        }

    return x;
}
////////////////////////////////

int main()
{
    string fileName = "galleries.txt"; //name of file
    fstream file;
    string cityWithHighiest, cityWithLowest; //variables for cities where will the gallery with the largest and smallest number of different types of premises be built
    int highiestAmount = 0, lowestAmount = 10000, size = 70, surfaces[size]; //variables for highist and smallest amount of premises, size of array, array for sizes of premises

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            string countryCode, cityName;
            file >> countryCode >> cityName;

            for(int i = 0; i < 70; i++)
            {
                int a, b;
                file >> a >> b;
                surfaces[i] = a*b;
            }

            sort(surfaces, size);
            int x = count(surfaces, size);

            if(x > highiestAmount)
            {
                cityWithHighiest = cityName;
                highiestAmount = x;
            }

            if(x < lowestAmount)
            {
                cityWithLowest = cityName;
                lowestAmount = x;
            }
        }
    file.close();

    cout << cityWithHighiest << " " << highiestAmount << endl;
    cout << cityWithLowest << " " << lowestAmount << endl;

    return 0;
}
