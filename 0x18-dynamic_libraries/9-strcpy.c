#include "main.h"
/**
 *_strcpy - funciton that copies a string
 *@src: source string to be copied
 *@dest: destination of the copied string
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
