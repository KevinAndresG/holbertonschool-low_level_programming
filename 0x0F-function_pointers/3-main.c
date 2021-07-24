#include "3-calc.h"

/**
 * main - function that executes a function given as a parameter
 * @argc: a int pointer
 * @argv: var int type
 * Return: return an int
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	char *op = argv[2];
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int k = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = f(a, b);
	printf("%d\n", k);
	return (0);
}
