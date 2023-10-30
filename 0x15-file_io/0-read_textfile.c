#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file name
 * @letters:number of letters
 * Return: the actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);
	count = read(fd, &buf[0], letters);
	count = write(STDOUT_FILENO, &buf[0], count);
	close(fd);
	return (count);
}
