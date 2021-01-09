void Merge(int array[], int l, int m, int r)
{
    int x = m - l + 1;
    int y = r - m;
 

    int Left[x], Right[y];
 

    for (int i = 0; i < x; i++)
        {
        Left[i] = array[l + i];
        }
    for (int j = 0; j < y; j++)
        {
            Right[j] = array[m + 1 + j];
        }

    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < x && j < y) {
        if (Left[i] <= Right[j]) {
            array[k] = Left[i];
            i++;
        }
        else {
            array[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < x) {
        array[k] = Left[i];
        i++;
        k++;
    }
    while (j < y) {
        array[k] = Right[j];
        j++;
        k++;
    }
}
 

void MergeSort(int array[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r-1)/2;
    MergeSort(array,l,m);
    MergeSort(array,m+1,r);
    Merge(array,l,m,r);
}
 

