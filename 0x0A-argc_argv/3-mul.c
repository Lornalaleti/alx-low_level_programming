#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: The size of the argv array.
 * @argv: An array of size argc.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int t = 0;

	if ((argc - 1) == 2)
	{
		t = ((atoi(argv[i + 1]) * atoi(argv[i + 2])));
		printf("%d\n", t);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
