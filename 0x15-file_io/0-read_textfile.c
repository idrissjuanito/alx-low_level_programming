#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * read_textfile - reads a text and prints the result
 *
 * @filename: the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i;
	ssize_t r_num, w_num, rw_num = 0;
	char buf[BUF_SIZE];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	for (i = 0; i < letters; i += BUF_SIZE)
	{
		r_num = read(fd, buf, letters < BUF_SIZE ? letters : BUF_SIZE);
		if (r_num <= 0)
			return (0);
		w_num = write(STDOUT_FILENO, buf, r_num);
		if (w_num != r_num)
			return (0);
		rw_num += w_num;
	}
	close(fd);
	return (rw_num);
}
