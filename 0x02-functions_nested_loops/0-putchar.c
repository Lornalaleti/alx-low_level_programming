#include "main.h"

/**
 * main - program that prints Main.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_main[9] = "Main";

	while (n < 9)
	{
		_putchar(str_main[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
