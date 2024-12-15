#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to the function
 * @size: size of the array
 * Return: print the array after each time you swap two elements
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp;

if (!array || size < 2)
	return;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
}
print_array(array, size);
}
}
}
