#include "sort.h"
#include <stddef.h>

/**
 * part - parts the array
 * @array: array of file
 * @low: integer
 * @high: integer
 * @size: size of array
 *
 * Return: new list
 */
int part(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low - 1;
	int j;
	int g;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				g = array[i];
				array[i] = array[j];
				array[j] = g;
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * qsorting - sorts an array
 * @array: array of file
 * @low: integer
 * @high: integer
 * @size: size of array
 *
 * Return: None
 */
void qsorting(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = part(array, low, high, size);
		qsorting(array, low, index - 1, size);
		qsorting(array, index + 1, high, size);
	}
}

/**
 * quick_sort - sorts the array
 * @array: array of task
 * @size: size of array
 *
 * Return None
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qsorting(array, 0, size - 1, size);
}
