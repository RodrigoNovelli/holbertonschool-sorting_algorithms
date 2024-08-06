#include "sort.h"
/**
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int aux = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array [i + 1] = aux;
			print_array(array, size);
		}
		else
			continue;
	}
}
