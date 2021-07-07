#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: pointer char type
 * Return: 0
 */
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s != '\0')
{
    s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
