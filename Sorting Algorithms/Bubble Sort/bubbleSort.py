def bubbleSort(array):
    n = len(array)
    for i in range(n):
        for j in range(n-1):
            if array[j] > array[j+1]:
                array[j], array[j+1]  = array[j+1], array[j]

