#include "main.h"
/**
 * main - function that prints _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
