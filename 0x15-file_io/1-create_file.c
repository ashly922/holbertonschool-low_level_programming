#include "main.h"

/**
 * create_file - creates a file and inserts text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, s = 0;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		y = write(x, text_content, s);
		if (y != s)
			return (-1);
	}

	close(x);

	return (1);
}
