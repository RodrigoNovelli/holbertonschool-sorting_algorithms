#include "sort.h"
/**
 * selection_sort - Puts the values of an
 * array in ascending order.
 * @array: The array you want to put in order.
 * @size: The size of the array.
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t min = 0;
	int p = 0;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[min] > array[y])
			{
				min = y;
			}
			if (y == size - 1 && min != x)
			{
				p = array[x];
				array[x] = array[min];
				array[min] = p;
				print_array(array, size);
			}
		}
	}
}
