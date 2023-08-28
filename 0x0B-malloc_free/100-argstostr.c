#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - entry point to function
 * @ac: integer input
 * @av: double pointer array
 * Return: 0 if success
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	int k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; n++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
