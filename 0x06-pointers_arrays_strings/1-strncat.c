#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 * @n: number of bytes to concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0'
		return (dest);
}
