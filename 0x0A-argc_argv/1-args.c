#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count the lines argument
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
int c;
	for (c = 0; c < argc; c++)
	{
		printf("%d\n", c);
	}
		return (0);
}
