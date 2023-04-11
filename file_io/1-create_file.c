#include "main.h"
/**
 * create_file - Create a file and write into it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: If the function succeeds, it returns 1.
 *         If the function fails or filename is NULL, it returns -1.
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
