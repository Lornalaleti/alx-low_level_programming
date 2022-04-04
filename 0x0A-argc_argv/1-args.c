#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The size of the argv array.
 * @argv: An array of size argc.
 * Return: 0.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
