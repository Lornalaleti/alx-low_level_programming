#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "Main";
	int m;

	m = 0;

	while (m <= 8)
	{
		_putchar(c[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}
