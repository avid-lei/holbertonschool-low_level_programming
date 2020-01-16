#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - search algo via binary
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */


int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_help(array, 0, size - 1, value));

}

/**
 * binary_help - helper function for binary search
 * @array: int
 * @start: int
 * @end: int
 * @value: int
 * Return: int
 */

int binary_help(int *array, int start, int end, int value)
{
	int mid, x;

	printf("Searching in array:");

	for (x = start; x <= end; x++)
		if (x == start)
			printf(" %d", array[x]);
		else
			printf(", %d", array[x]);

	printf("\n");


	if ((end == start) && (value != array[start]))
		return (-1);

	mid = start + ((end - start) / 2);

	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_help(array, start, mid - 1, value));
	else
		return (binary_help(array, mid + 1, end, value));

}
