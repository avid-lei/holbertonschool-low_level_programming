#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * check_steps - check in between steps
 * @array: int*
 * @start: int
 * @end: int
 * @value: int
 * Return: int
 */

int check_steps(int *array, int start, int end, int value)
{

	for (; start <= end; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (array[start] == value)
			return (start);
	}
	return (-1);
}

/**
 * jump_search - search algo via jump
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size + step; i = i + step)
	{
		if (i > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - step, i);
			return (check_steps(array, i - step, (int)size - 1, value));
		}

		if (value <= array[i])
		{

			printf("Value found between indexes [%d] and [%d]\n", i - step, i);
			return (check_steps(array, i - step, i, value));
		}
		else
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	}

	return (-1);



}
