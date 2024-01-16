#include "sort.h"

/**
 * swap - swap the values
 * @xp: the value to swap
 * @yp: the value to swap
 */
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}