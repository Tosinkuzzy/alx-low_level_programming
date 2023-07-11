/*
 * File: 1-create_file.c
 * Author: Tosinkuzzy
 */

#include "main.h"

/**
 * create_file - Entry point
 * Description: Create a file.
 * @fileName: Name of the file to be read
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *fileName, char *text_content)
{
int fd, my_write, i = 0;

if (!fileName)
return (-1);
fd = open(fileName, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content)
{
while (text_content[i])
i++;
my_write = write(fd, text_content, i);
if (my_write == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
