#include "main.h"
#include <elf.h>
/**
* check_elf - function that checks if a file is an ELF file
* @e_identity: pointer to an array containing the ELF magic numbers
*
* Return: always 0
*/
void check_elf(unsigned char *e_identity)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_identity[index] != 127 &&
			e_identity[index] != 'E' &&
			e_identity[index] != 'L' &&
			e_identity[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
