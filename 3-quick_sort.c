#include "sort.h"
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = a;
    *a = *b;
    *b = temp;
}

int lomuto_partition(int *array, int low, int high, size_t size)
{
    int pivot, i, j;
    pivot = array[high];
    i = low - 1;
    
    for (j = low; j <= high  - 1; j++)
    {
        if (array[j] > pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);
    
    return (i + 1);
}
void quick_sort(int *array, size_t size)
{
    if (array = NULL || size < 2)
    {
        return;
    }

}
