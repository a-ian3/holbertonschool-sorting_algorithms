#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: print the array after each time you swap two elements
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t count, i = 0;

	if (size < 2)
		return;
	/* we dont care if 0 / 1 elements */

	while (size - 1 - i)
	{
		for (count = 0; count < size - 1 - i; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count + 1];
				array[count + 1] = array[count];
				array[count] = temp;
				print_array(array, size);
				/* print the array after each swap*/
			}
		}
		i++;
	}
}
