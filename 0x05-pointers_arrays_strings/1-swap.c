#include "holberton.h"
/**
 * swap_int - that takes a pointer to an int
 *@a: a pointer
 *@b: other pointer
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int *c, *d, mix;

c = a;
d = b;
mix = *d;
*d = *c;
*c = mix;
}
