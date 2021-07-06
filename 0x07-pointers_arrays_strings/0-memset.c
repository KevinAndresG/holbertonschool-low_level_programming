#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer s 
 * @b: constant byte
 * @n: unsigned int
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int j;
    
    for (j = 0; j < n; j++)
    {
        s[j] = b;
    }
    return (s);
}