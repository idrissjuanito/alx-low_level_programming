#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_num, i = 0;
	char buf[1];

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[i] != '\0')
	{
		buf[0] = text_content[i];
		w_num = write(fd, buf, 1);
		if (w_num != 1)
			return (-1);
		i++;
	}
	close(fd);
	return (1);
}
