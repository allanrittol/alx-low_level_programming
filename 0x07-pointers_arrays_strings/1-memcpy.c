#include "main.h"

/**
 * _memcpy - copies bytes from two memory areas
 * @src: mem1
 * @dest: mem2
 * @n: number of bytes to copy
 * Returns: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
