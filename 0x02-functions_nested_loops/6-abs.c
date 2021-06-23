#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *@abs: an input of an integer
 * Return: Always 0.
 */
int _abs(int abs)
{
if (abs >= 0)
{
return (abs);
}
else
{
return (abs * -1);
}
}
