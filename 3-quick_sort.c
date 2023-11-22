#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two integers.
 * @a: pointer to first integer.
 * @b: pointer to second integer.
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void sort_recursion(int *array, int low, int high, size_t size);

/**
 * lomuto_partition - the Lomuto partition scheme
 * @array: Array
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: The pivot
 */

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

/**
 * quick_sort - Sorts an array of integers using the QuickSort
 * @array: Array to be sorted.
 * @size: Size of the array.
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	sort_recursion(array, 0, size - 1, size);
}

/**
 * sort_recursion - Rsorts the array using quickSort.
 * @array: Array to be sorted.
 * @low: Starting index of the array.
 * @high: Ending index of the array.
 * @size: Size of the array.
 */

void sort_recursion(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = lomuto_partition(array, low, high, size);
		sort_recursion(array, low, index - 1, size);
		sort_recursion(array, index + 1, high, size);
	}
}
