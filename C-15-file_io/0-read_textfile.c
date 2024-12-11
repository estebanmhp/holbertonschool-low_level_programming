#include "main.h"

/**
 * read_textfile - read a file text and print to stdout
 * @filename:  Name of  the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	long int fd, r_file, w_file;
	char *out;

	out = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (out == NULL)
	{
		free(out);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	r_file = read(fd, out, letters);
	w_file = write(STDOUT_FILENO, out, r_file);

	if (fd == -1 || r_file == -1 || w_file == -1 || r_file != w_file)
	{
		free(out);
		return (0);
	}
	free(out);
	close(fd);
	return (w_file);
}
