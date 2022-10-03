#include "main.h"
/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: string
 *@needle: substring
 *Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			break;
		}
		if (*n == '\0')
		return (haystack);
		haystack++;
	}
	return ('\0');
}
