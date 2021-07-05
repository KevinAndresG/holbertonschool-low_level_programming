#include "holberton.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: char
 * @src: char
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
int c = 0;
int x = 0;
while (dest[c] != '\0')
{
c++;
}
while (src[x] != '\0')
{
dest[c + x] = src[x];
x++;
}
dest[c + x] = '\0';
return (dest);
}
