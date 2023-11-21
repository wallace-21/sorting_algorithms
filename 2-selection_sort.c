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
		swap = array[i];
		array[i] = array[index];
		array[index] = swap;
		print_array(array, size);
	}
}
