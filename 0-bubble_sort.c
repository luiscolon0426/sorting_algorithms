#include "sort.h"
/**
 * bubble_sort - do a bubble sort aja
 * @array: array of file
 * @size: size of array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	long unsigned int x, y, tmp;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size - y - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
