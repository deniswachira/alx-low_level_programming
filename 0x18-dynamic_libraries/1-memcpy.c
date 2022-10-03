#include "main.h"
/**
 *_memcpy - function that copies n bytes from src to dest
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: new destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


