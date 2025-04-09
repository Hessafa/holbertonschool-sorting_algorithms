#include "sort.h"

/**
 * print_array - Prints an array of integers.
 * @array: Pointer to the array to print.
 * @size: The size of the array.
 *
 * Description: This function prints the elements of an array in a
 * comma-separated format, followed by a new line.
 */
void print_array(const int *array, size_t size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < (int)(size - 1); i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
