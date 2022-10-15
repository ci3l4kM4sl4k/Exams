#include <iostream>
#include <fstream>
using namespace std;

void sort(int array[], int size)
{
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size-1; j++)
            if(array[j] > array[j+1])
                swap(array[j],array[j+1]);
}

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

int main()
{
    string fileName = "galerie.txt";
    fstream file;
    string cityWithHighiest, cityWithLowest;
    int highiestAmount = 0, lowestAmount = 10000, size = 70, surfaces[size];

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
