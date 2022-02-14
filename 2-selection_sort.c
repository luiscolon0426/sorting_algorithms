#include "sort.h"
/**
 * swap - swap integers
 * @a: integer
 * @b: integer
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a, b, min;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b;
		}
		swap(&array[min], &array[a]);
		print_array(array, size);
	}
}
