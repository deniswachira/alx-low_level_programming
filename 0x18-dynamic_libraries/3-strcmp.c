#include "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1: string one
 *@s2: string two
 *Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = (s1[i] - s2[i]);
			break;
		}
		if (s1[i] > s2[i])
		{
			diff = (s1[i] - s2[i]);
			break;
		}
	}
	return (diff);
}
