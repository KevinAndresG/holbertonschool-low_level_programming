#include "holberton.h"
#include <stdlib.h>
/**
 * Create_array - object
 * @size: int
 * @c: char
 */

char *create_array(unsigned int size, char c)
{
unsigned int n;
char *j;
if (size == 0)
{
return ('\0');
}
j = malloc(size * sizeof(char));
for (n = 0; n <= size; n++)
{
j[n] = c;
}
return(j);
}