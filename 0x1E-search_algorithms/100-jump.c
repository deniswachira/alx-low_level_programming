#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm using square root of
 * size as a step
 * @array: pointer to the first elememnt of an ascending ordered
 * array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located at or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump < size - 1)
		jump = jump;
	else
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
