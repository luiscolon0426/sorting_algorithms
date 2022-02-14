#include "sort.h"
#include <stddef.h>


int part(int *array, int a, int b, size_t size)
{

	int pivot = array[b];

	int i = a - 1;
	int j;
	int g;

	for (j = a; j <= b; j++)
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
void qsorting(int *array, int a, int b, size_t size)
{
	int index;

	if (a < b)
	{
		index = part(array, a, b, size);
		qsorting(array, a, index - 1, size);
		qsorting(array, index + 1, b, size);
	}
}

/**
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qsorting(array, 0, size - 1, size);
}
