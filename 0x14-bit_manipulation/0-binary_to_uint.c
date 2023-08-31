#include "main.h"
/**
 * binary_to_uint - function converts binary to unsigned int
 * @b: pointer to a string
 *
 * Return: binary if null returns b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int l;

	if (*b == '\0')
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		num += (b[l] - '0') * mul;
		mul *= 2;
	}
	return (num);
}
