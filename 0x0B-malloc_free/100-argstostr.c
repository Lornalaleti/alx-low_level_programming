#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - function the long of the char
* @s: char for the value
*
* Return: int
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i + 1);
}

/**
* *argstostr - function that concatenates all the arguments of your program.
* @ac: number of the character
* @av: char of into
* Return: pointer char
*/

char *argstostr(int ac, char **av)
{
	char *pointer;

	unsigned int i, j, k, lenght;

	k = 0;
	lenght = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
		lenght += _strlen(av[i]);

	pointer = malloc((lenght + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			pointer[k] = av[i][j];
			k++;
		}
		pointer[k] = '\n';
		k++;
	}

	pointer[k] = '\0';
	return (pointer);
}
