#include "main.h"
/**
 *_strncat - fuction that concatenates two string
 *@dest: destination string
 *@src: source string
 *@n: most length
 *Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_d;

	len_d = _strlen(dest);

	for (i = 0; src[i] != src[n] ; ++i, ++len_d)
	{
		dest[len_d] = src[i];
	}
	dest[len_d] = '\0';
	return (dest);
}
