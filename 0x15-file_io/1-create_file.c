#include <stdio.h>
#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: pointer
 * @text_content: a string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int fd, fd_write, len;
len = _strlen(text_content);
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
fd = open(filename, O_CREAT | O_RDWR, 0600);
if (fd == -1)
return (-1);
fd_write = write(fd, text_content, len);
if (fd_write == -1)
return (-1);
close(fd);
return (1);
}

/**
 *
 * _strlen - returns the length of a string
 * @s: is name of the pointer
 * Return:0
 */

int _strlen(char *s)
{

int z;
for (z = 0; s[z] != '\0'; z++)
{

}
return (z);
}
