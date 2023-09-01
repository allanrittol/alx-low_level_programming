#include "main.h"
/**
 * flip_bits - function that returns the number of bits to flip numbers
 * @m: number to be flipped
 * @n: value of bits
 *
 * Return: (0) when successful
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
