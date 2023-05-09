#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

void readErr(int filedes, char *filename);
void safeCloseFile(int filedes);
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * main - entry to the program
 *
 * @ac: argument count passed to main
 * @av: array of argument value passed to main
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_in, fd_out, fflags;
	ssize_t r_num, w_num;
	mode_t fperms;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_in = open(av[1], O_RDONLY);
	readErr(fd_in, av[1]);

	fflags = O_WRONLY | O_CREAT | O_TRUNC;
	fperms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_out = open(av[2], fflags, fperms);

	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	r_num = read(fd_in, buf, BUF_SIZE);
	while (r_num > 0)
	{
		w_num = write(fd_out, buf, r_num);
		if (w_num != r_num)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		r_num = read(fd_in, buf, BUF_SIZE);
	}
	readErr(r_num, av[1]);
	safeCloseFile(fd_in);
	safeCloseFile(fd_out);
	return (0);
}

/**
 * readErr - checks for errors from file descriptors of files
 *
 * @filedes: file descriptor to check
 * @filename: name of file concerned
 *
 * Return: nothing
 */
void readErr(int filedes, char *filename)
{
	if (filedes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * safeCloseFile - closes open file descriptors and checks for errors
 *
 * @filedes: the value of the file descriptor
 *
 * Return: nothing
 */
void safeCloseFile(int filedes)
{

	if (close(filedes) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
}
