#include "main.h"

/**
 * main - copies the content of a file
 * @argc: number of args passed
 * @argv: array of args
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int fd, w, r, x, y;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd, buf, BUFSIZ)) > 0)
	{
		if (w < 0 || write(w, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't white to %s\n", argv[2]);
			close(r);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
		x = close(fd);
		y = close(w);
		if (x < 0 || y < 0)
		{
			if (x < 0)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			if (y < 0)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
			exit(100);
		}
		return (0);
}
