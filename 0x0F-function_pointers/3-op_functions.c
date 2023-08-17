#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: value 1
 * @b: value 2
 *
 * Return: sum of values
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: value 1
 * @b: value 2
 *
 * Return: subtraction of values
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: value 1
 * @b: value 2
 *
 * Return: multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: value 1
 * @b: value 2
 *
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulous of two integers
 * @a: value 1
 * @b: value 2
 *
 * Return: modulous of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
