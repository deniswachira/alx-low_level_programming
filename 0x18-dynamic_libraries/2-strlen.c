#include "main.h"
/**
 *_strlen - function that count the length of a string
 *
 *@s: pointer
 *
 *Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
