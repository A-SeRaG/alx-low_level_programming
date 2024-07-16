#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	if (!(*array))
		return (-1);
	for (int i = 0; i < size; i++)
		if (value == arr[i])
			return (i);
	if (i == size)
		return (-1);
}
