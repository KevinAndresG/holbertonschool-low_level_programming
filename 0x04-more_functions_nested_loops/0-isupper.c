#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: an int
 * Return: an int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
