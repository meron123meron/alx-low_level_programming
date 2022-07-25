#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, write_file;
char *buf;
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
if (filename == NULL)
return (0);
file = open("task0", O_RDONLY);
if (file == -1)
return (0);
read(file, buf, letters);
close(file);
write_file = write(STDOUT_FILENO, buf, letters);
close(file);
return (write_file);
}
