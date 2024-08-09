#include "sort.h"
/*+
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	int aux = 0;
	
	for (x = 0; x < size; x++)
	{
		for (y = 1; y < size - x; x++)
		{
			if (array[x] > array[y])
			{
				aux = array[x];
				array[x] =  array[y];
				array[y] = aux;
				print_array(array, size);
			}
			else
				continue;
		}
	}
}
