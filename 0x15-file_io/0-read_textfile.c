#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include "main.h"


/**
 * read_textfile - read a text file and prints it to stdout
 * @filename: the name of the file
 * @letters: the number of letter it should read and print
 *
 * Return: the actual number of letter it could print
 * Or 0 if filename == NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, max;
	char *buffer[1024];

	fd = open(filename, O_RDONLY);
	max = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, letters);
	close(fd);
	if (n > max)
		n = max;
	return (n);
}
