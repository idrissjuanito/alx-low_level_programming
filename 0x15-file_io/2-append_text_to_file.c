#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text to a file
 *
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t w_num;
	char buf[1];

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	printf("--> %d\n", fd);
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
