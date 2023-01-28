#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - this is a selction algorithm
 * @size: this is the size of array
 * @array: the array to sort
 * Return: 0 always
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, temp;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
		i++;
		print_array(array, size);
	}
}
