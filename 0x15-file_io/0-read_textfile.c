#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the std out
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	int y, t;
	char *b;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);

	y = read(x, b, letters);
	if (y < 0)
	{
		free(b);
		return (0);
	}
	b[y] = '\0';

	close(x);

	t = write(STDOUT_FILENO, b, y);
	if (t < 0)
	{
		free(b);
		return (0);
	}

	free(b);
	return (t);
}
