#include "main.h"

/**
 * _strncpy - main function that copies a string
 * @dest: destination string
 * @src: source string
 * Return: dest
 * @n: number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < 0 && src[i] != '\0')
		dest[i] = src[i]
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
