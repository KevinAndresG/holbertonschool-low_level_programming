#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char a = 97;
int b;
for (b = 0; b < 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
