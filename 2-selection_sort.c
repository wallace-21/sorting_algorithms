#include "sort.h"
/**
 * selection_sort - sorting selection algorithm
 *
 * @array: array to sort
 * @size: size of the array
 * Return: sorted array
 **/

void selection_sort(int *array, size_t size)
{
	int swap;
	size_t i, j, index;
	
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			swap = array[index];
			array[index] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
