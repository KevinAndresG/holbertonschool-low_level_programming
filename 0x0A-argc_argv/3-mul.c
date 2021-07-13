#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: count the lines argument
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc == 4)
	{
		printf("Error\n");
		return (-1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d", result);

	return (0);
}
