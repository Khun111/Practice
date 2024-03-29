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
 * append_text_to_file - appends text to a file
 * @filename: file to append
 * @text_content: text to append
 * Return: 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content)
	{
		c_written = write(fd, text_content, _strlen(text_content));
		if (c_written == -1)
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
