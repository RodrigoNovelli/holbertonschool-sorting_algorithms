#include "sort.h"

/**
 *bubble_sort - Function that sorts an array of integers
 *@size: size of the array
 *@array: the array of integers we have to sort
 *Return: Void
 *authors: Rodrigo Novelli (C24), Rodrigo Ferrer (C24)
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
			array[i + 1] = aux;
			print_array(array, size);
		}
		else
			continue;
	}
}
