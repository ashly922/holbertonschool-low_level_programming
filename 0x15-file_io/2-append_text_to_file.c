#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t x, y;
	int s = 0;

	if (!filename)
		return (-1);

        x = open(filename, O_RDWR | O_APPEND);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		y = write(x, text_content, s);
		if (y < 0)
			return (-1);
	}

	return (1);
}
