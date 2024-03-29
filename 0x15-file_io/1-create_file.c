#include "main.h"
/*
 * _strlen - finds length of string
 * @txt: string
 * Return: length
*/
int _strlen (char *txt)
{
	int length = 0;

	for (; txt[length]; length++)
	;
	return (length);
}
/*
 * create_file - creates a file
 * @filename: file to create
 * @text_content: text to write
 * Return: 1 on success
*/
int create_file(const char *filename, char *text_content)
{
	int fd, c_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (fd);
	if (text_content)
	{
		c_written = write(fd, text_content, _strlen(text_content));
		if (c_written == 0)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
