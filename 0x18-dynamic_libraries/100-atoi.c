#include "main.h"
/**
 * _atoi - fuction that converts string to integer
 * @s: string character
 * Return: integer l
 */
int _atoi(char *s)
{
	int i = 0, j = 1, k;
	unsigned int l = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		k = s[i] - '0';
		if (l > 0 && !(k >= 0 && k <= 9))
			break;
		if (k >= 0 && k <= 9)
			l = l * 10 + k;
		i++;
	}
	l *= j;
	return (l);
}
