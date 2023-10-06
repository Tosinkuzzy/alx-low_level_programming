#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* check97 - checks number of arguments.
* @argc: number of argument counts.
* 
* Return: void
*/
void check97(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/**
* check98 - checks that file_from exists and can be read.
* @check: checks if true or false.
* @file: file_from name.
* @fd_from: file descriptor of file_from, or -1.
* @fd_to: file descriptor of file_to, or -1.
*
* Return: void
*/
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
if (fd_from != -1)
close(fd_from);
if (fd_to != -1)
close(fd_to);
exit(98);
}
/**
* check99 - check that file that exit and can be read.
* @check: checks if true or false.
* @file: file_from name.
* @fd_from: file descriptor of file_from, or -1.
* @fd_to: file descriptor of file-to, or -1.
*
* Return: void
*/
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
if (fd_from != -1)
close(fd_from);
if (fd_to != -1)
close(fd_to);
exit(99);
}
/**
* check100 - checks that file descriptors were closed properly.
* @check: check if true or false
* @fd: file descriptor
*
* Return: void
*/
void check100(int check, int fd)
{
if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
/**
* Main - copies the content of a file to another.
* @argc: number of arguments count passed.
* @argv: array of pointers to the arguments.
*
* Return: 0 on success.
*/
int main(int argc, char **argv[])
{
int fd_from, fd_from, close_from;
ssize_t len_read, len_write;
char buffer[1024];
mode_t file_perm;

check97(argc);
fd_from = open(argv[1], O_RDONLY);
check98((ssize_t) fd_from, argv[1], -1, -1);
file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
check99((ssize_t) fd_to, argv[2], fd_from, -1);
len_read = 1024;
while (len_read == 1024)
{
len_read = read(fd_from, buffer, 1024);
check98(len_read, argv[1], fd_from, fd_to);
len_write = write(fd_to, buffer, len_read);
if (len_write != len_read)
len_write = -1;
check99(len_write, argv[2], fd_from, fd_to);
}
close_to = close(fd_to);
close_from = close(fd_from);
check100(close_to, fd_to);
check100(close_from, fd_from);
return (0);
}
