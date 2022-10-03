#include "main.h"
/**
 *_strcat - fuction that concatenates two string
 *@dest: destination string
 *@src: source string
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i,

	len_d = _strlen(dest);

	for (i = 0; src[i] != '\0'; ++i, ++len_d)
	{
		dest[len_d] = src[i];
	}
	return (dest);
}
