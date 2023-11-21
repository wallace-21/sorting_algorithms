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
	int swap, smallest;
	size_t i, j, index;

	smallest = array[0];
	for (i = 0; i < size - 1; i++)
	{
		j = i + 1;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < smallest)
			{
				smallest = array[j];
				index = j;
			}
		}
		swap = array[i];
		array[i] = array[index];
		array[index] = swap;
		print_array(array, size);
	}
}
