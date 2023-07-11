/*
 * File: 3-cp.c
 * Author: Tosinkuzzy
 */

#include "main.h"

char *allocate_buffer(char *fileName);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - Entry point
 * Description: Allocates bytes to be used by the buffer.
 * @fileName: Name of the file
 *
 * Return: Buffer allocated
 */

char *allocate_buffer(char *fileName)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (!buffer)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
exit(99);
}
return (buffer);
}
/**
 * close_file_descriptor - Closes file
 * @fd: File description file
 */
void close_file_descriptor(int fd)
{
int result;
result = close(fd);
if (result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Entry point
 * Description: Copies content within file to another file
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: 0, if successful
 */
int main(int argc, char *argv[])
{
int file_from, file_to, my_read, my_write;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = allocate_buffer(argv[2]);
file_from = open(argv[1], O_RDONLY);
my_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
do {
if (file_from == -1 || my_read == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
my_write = write(file_to, buffer, my_read);
if (file_to == -1 || my_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
my_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
}
while (my_read > 0);
free(buffer);
close_file_descriptor(file_from);
close_file_descriptor(file_to);
return (0);

}
