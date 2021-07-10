#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count the lines argument
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	}
		return (0);
}
