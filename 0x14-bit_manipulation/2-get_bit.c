#include "main.h"
/**
 * get_bit - function that returns the value of an index bit
 * @index: starting point of the bit
 * @n: contains an integer
 * Return: value of the bit at index -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
