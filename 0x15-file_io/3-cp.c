#include "main.h"
void check_valid(int val, char *filename, mode)
{
	if (val == -1 && mode == 'O')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	else if (val == -1 && mode == 'W')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(99);
	}
	else if (val == -1 && mode == 'C')
	{
		dprintf(STDERR_FILENO, "Can't close fd %i", val);
		exit(100);
	}
}
int main(int count, char **value)
{
	int file_fro, file_to, c_read = 1024, c_written;
	char buf[1024];

	if (count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	}

	file_fro = open(value[1], O_RDONLY | O_CREAT | O_TRUNC);
	check_valid(file_fro, value[1], 'O');
	file_to = open(value[2], O_RDONLY | O_CREAT | O_TRUNC);
	check_valid(file_to, value[2], 'O');
	while (c_read == 1024)
	{

	}
}
