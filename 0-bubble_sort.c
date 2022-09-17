#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: unsorted array of integers
 * @size: size of array
 * Return: void
 **/

void bubble_sort(int *array, size_t size)
{
	size_t idx = 0, i = 0;
	int swap = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (idx = 0; idx < (size - i - 1); idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
