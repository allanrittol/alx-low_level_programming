#include "main.h"
/**
 * append_text_to_file - function appends text at the end of file
 * @filename: contains the name of the file
 * @text_content: pointer to the string
 *
 * Return: 1 if successful and -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
		a = open(filename, O_WRONLY | O_APPEND);
		w = write(a, text_content, len);

		if (a == -1 || w == -1)
			return (-1);

		close(a);
		return (1);
}
