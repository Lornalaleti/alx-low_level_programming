#include "main.h"
#include <stdlib.h>

/**
* *create_array - function that creates an array of char,
* and initializes it w* ith a specific char.
* @size: varaible the type unsigned int and is the lengh of the char
* @c: varaibleo of type char
* Return: char copie
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));

	if (p == 0 || size == 0)
		return (0);


	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);

}
