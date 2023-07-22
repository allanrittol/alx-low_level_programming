#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int z;

	if (n < 0)
	{
		z = -1 * (n % 10);
		_putchar(z + '0');
		return (z);
	}
	else
	{
		z = n % 10;
		_putchar(z + '0');
		return (z);
	}
}
