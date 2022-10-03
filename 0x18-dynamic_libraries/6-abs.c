#include "main.h"
/**
 *_abs - funtion to print absolute value of i
 *
 *@i: any integer
 *
 *Return: i if positive, -i if negative
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
else if (i < 0)
{
return (-1 * i);
}
else
{
return (0);
}
}
