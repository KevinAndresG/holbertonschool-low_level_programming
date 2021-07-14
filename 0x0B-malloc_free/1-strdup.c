#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: a char pointer
 * Return: return a char
 */
char *_strdup(char *str)
{

int k = 0;
int f;
char *h;
if (str == NULL)
{
return (NULL);
}
while (str[k] != '\0')
{
k++;
}
h = malloc((k++) * sizeof(char));
if (h == 0)
{
return (0);
}
for (f = 0; f <= k; f++)
{
h[f] = str[f];
}
return (h);
}
