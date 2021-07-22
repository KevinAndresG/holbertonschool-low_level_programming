#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that allocates memory using malloc.
 * @name: a char pointer
 * @f: the function to save the other function
 * Return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
