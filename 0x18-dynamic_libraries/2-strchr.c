#include "main.h"
/**
 *_strchr - function that locates character in string
 *@s: string
 *@c: occurrence of c
 *Return: first occurrence of char c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

