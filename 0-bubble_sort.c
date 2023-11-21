#include "sort.h"
/**
 * bubble_sort - sorts array bubble algorithm
 *
 * @array: array to sort
 * @size: size of array
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j + 1] < array[j])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
		}
		print_array(array, size);
	}
}
