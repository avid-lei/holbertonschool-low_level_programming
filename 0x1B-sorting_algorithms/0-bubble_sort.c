#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sort via bubble method
 * @array: int
 * @size: size_t
 * Return: always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t cycle, swap, temp;

	for (cycle = 0; cycle < size - 1; cycle++)
	{
		for (swap = 0; swap < size - 1; swap++)
		{
			if (array[swap + 1] < array[swap])
			{
				temp = array[swap];
				array[swap] = array[swap + 1];
				array[swap + 1] = temp;
				print_array(array, size);

			}
		}
	}
}
