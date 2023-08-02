#include "main.h"

/**
* *_memset- fills memory with a constant byte
* @s: area to fill with bytes
* @b: constant byte
* @n: bytes of the memory
* Return: a pointer to memory s
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
