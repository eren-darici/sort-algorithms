void InsertionSort(int array[], int lenArray)
{
    

    for (int i = 0; i < lenArray; i++)
    {
        int key = array[i];
        
        int j = i - 1;

        while(j >= 0  && key < array[j])
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = key;
    }
}
