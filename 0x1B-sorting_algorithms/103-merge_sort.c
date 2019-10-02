#include "sort.h"

void split(int *array, int start, int end);
int middle(int start, int end);
void merge(int *array, int start, int m, int end);

/**
 * merge_sort - sorting via merge method
 * @array: int*
 * @size: size_t
 * Return: always 0
 */

void merge_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;
	split(array, 0, size - 1);
}


/**
 * middle - find middle of merge split
 * @start: int
 * @end: int
 * Return: int
 */

int middle(int start, int end)
{
	int middle = (end - start) / 2;

	if ((end - start) % 2 == 0)
		middle--;
	return (middle + start);
}

/**
 * split- recursive function to split up array into single elements
 * @array: int*
 * @start: int
 * @end: int
 * Return: always 0
 */

void split(int *array, int start, int end)
{
	int m;

	if (start < end)
	{
		m = middle(start, end);
		split(array, start, m);
		split(array, m + 1, end);

		merge(array, start, m, end);
	}


}

/**
 * merge- merger function
 * @array: int*
 * @start: int
 * @m: int
 * @end: int
 * Return: always 0
 */

void merge(int *array, int start, int m, int end)
{
	int len_left = m - start + 1;
	int len_right = end - m;
	int l, r, i, k;

	int *left = malloc(sizeof(int) * len_left);
	int *right = malloc(sizeof(int) * len_right);
	int *new = malloc(sizeof(int) * end - start + 1);

	printf("Merging...\n");
	printf("[left]: ");
	for (l = start, i = 0; l <= m; l++, i++)
	{
		left[i] = array[l];
	}
	print_array(left, len_left);

	printf("[right]: ");

	for (r = m + 1, i = 0; r <= end; r++, i++)
	{
		right[i] = array[r];
	}

	print_array(right, len_right);

	l = 0;
	r = 0;
	i = start;
	k = 0;

	while (l < len_left && r < len_right)
	{
		if (left[l] <= right[r])
		{
			array[i] = left[l];
			new[k] = left[l];
			l++;
		}
		else
		{
			array[i] = right[r];
			new[k] = right[r];
			r++;
		}
		i++;
		k++;
	}


	while (l < len_left)
	{
		array[i] = left[l];
		new[k] = left[l];
		l++;
		i++;
		k++;
	}

	while (r < len_right)
	{
		array[i] = right[r];
		new[k] = right[r];
		r++;
		i++;
		k++;
	}

	printf("[Done]: ");
	print_array(new, end - start + 1);

	free(left);
	free(right);
	free(new);
}
