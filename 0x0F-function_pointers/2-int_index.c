#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index-searches for a integer
 *@array:int
 *@size:int
 *@cmp:pointer function
 *Return:int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return(-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);

		}
	}

	return (-1);


}
