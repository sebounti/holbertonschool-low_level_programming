#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: a pointer to the name of the file.
 * @letters:the nimbers of letters the function
 * should read and print.
 * return: if the function fails or filename is NULL
 * O/w - The actuel numer of bytes the function
 * can read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
	return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);
	return (w);
}
