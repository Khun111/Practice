#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, c_read, c_written;
    char *buf = malloc(letters + 1);
    if (!buf || !filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    c_read = read(fd, buf, letters);
    if (c_read == -1)
        return (0);
    buf[c_read] = '\0';
    c_written = write(STDOUT_FILENO, buf, c_read);
    if (c_written != c_read)
        return (0);
    free(buf);
    close(fd);
    return (c_read);
}