#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_file, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		w_file = write(fd, text_content, length);

		if (w_file == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
