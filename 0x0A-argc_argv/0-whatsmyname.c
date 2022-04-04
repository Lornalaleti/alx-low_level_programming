#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The size of the argv array.
 * @argv: An array of size argc.
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
