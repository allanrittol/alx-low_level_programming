#include "main.h"
/**
 * clear_bit - function that stes the bit value to 0
 * @index: bit value
 * @n: bit
 *
 * Return: 1 if success and -1 if not successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
