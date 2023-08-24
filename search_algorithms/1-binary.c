#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @array: The array to print.
 * @start: The starting index.
 * @end: The ending index.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in an array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found or NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
