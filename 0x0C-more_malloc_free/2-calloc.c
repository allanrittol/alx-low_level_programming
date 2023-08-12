#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: an array
 * @size: size of the array
 * Return: (0) if nmemb & size is zero returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}

