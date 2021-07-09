#include "holberton.h"
/**
 * cousin - my function
 * @x: int x
 * @y: int y
 * Return: an integer
 */
int cousin(int x, int y)
{
if (x == y)
{
return (1);
}
if (x % y == 0)
{
return (0);
}
/*
* y++;
* return(cousin(x, y));
*/
return (cousin(x, y + 1));
}
/**
 * is_prime_number - returns 1 if the input integer
 * @n: int n
 * Return: an integer
 */
int is_prime_number(int n)
{
if (n == 1 || n <= 0)
{
return (0);
}
return (cousin(n, 2));
}
