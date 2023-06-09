#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[READ_BUF_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	fd = open(filname, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
