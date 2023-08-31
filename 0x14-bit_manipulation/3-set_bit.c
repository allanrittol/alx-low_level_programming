#include "main.h"
/**
 * set_bit - function that sets the bit value to an index
 * @index: contains bit index values
 * @n: bits value
 *
 * Return: 1 if it works and -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
