#include "main.h"
/**
 *_memset - funtion that fills the first n bytes by b in s
 *@s: character
 *@b: new character
 *@n: first n bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
