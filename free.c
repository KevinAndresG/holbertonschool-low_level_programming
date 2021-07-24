void Free(int **a, int b);
void Free(int **a, int b)
{
	int **q = a;

	while(b--)
	{
		free(*a);
		a++;
	}
	free(q);
}