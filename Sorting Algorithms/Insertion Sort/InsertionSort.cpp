#include <iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        
        array[j +1] = key;
    }

}
