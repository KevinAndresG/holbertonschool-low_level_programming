#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int r;

for (r = 0; r < 24; r++)
{
putchar(a[r]);
}
putchar('\n');
return (0);
}
