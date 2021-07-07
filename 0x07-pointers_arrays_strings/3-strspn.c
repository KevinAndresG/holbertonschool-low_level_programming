#include "holberton.h"
/**
 * _strspn - just accept
 * @s: char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int k, j;

unsigned int l = 0;

for (k = 0; s[k] != ' '; k++)
{
for (j = 0; accept[j] != '\0'; j++)
if (accept[j] == s[k])
{
l++;
}
}
return (l);
}
