#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
				index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
