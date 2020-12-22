void swapItems(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int sizeofArray)
{
    for (int i = 0; i < sizeofArray; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < sizeofArray; j++)
        {
            if (array[min_index] > array[j])
            {
                min_index = j;
            }
        }
        swapItems(&array[min_index], &array[i]);      
    }
}

