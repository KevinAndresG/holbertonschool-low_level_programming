#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a;

for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
