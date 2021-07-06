#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer
 * @src: char
 * @n: unsigned int
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
j = 0;

while (j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
