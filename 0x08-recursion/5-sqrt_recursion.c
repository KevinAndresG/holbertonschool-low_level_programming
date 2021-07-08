#include "holberton.h"
/**
 * root - new function
 * @x: int x
 * @y: int y
 * Return: 0
 */
int root(int x, int y)
{
if (x == y * y)
{
return (y);
}
if (y > x / 2)
{
return (-1);
}
else
y++;
return (root(x, y));
}
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: integer
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
if (n == 0)
{
return (0);
}
return (root(n, 2));
}
