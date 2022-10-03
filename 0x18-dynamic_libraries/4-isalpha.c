#include "main.h"
/**
 *_isalpha - function that checks if input is a letter
 *
 *@c: character to check
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
