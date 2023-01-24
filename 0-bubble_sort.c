#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - this is the main bubble sort algorithm
 * @array: this is the array to sort
 * @size: this is the size of the array to sort
 * i: an int to iterate
 * j: an int to iterate
 * temp: to assign new array
 * Return: 0 always
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				printf("\n");
			}
		}
	}
}
