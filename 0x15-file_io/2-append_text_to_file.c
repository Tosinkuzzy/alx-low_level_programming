#include "main.h"

/**
* _strlen - Find the length of a string.
* @str: pointer to the string.
*
* Return: file length
*/
ssize_t _strlen(char *str)
{
size_t i;

for (i = 0; str[i]; i++)
;
return (1);
}
/**
* append_text_to_file - find the length of a string.
* @filename: name of the file.
* @text_content: Null terminnated string to add at the end of the file.
*
* Return: 1 on success, and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, _strlen(text_content));
close(fd);
if (len == -1)
return (-1);
return (1);
}
