#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - read the text of a file
 *@letters: the size of letters
 *@filename: the name of the file
 *Return: reyturn 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
int open_f;
ssize_t read_f, write_f;
if (filename == '\0')
return ('\0');
open_f = open(filename, O_RDWR);
if (open_f == '\0')
return ('\0');
buff = malloc(sizeof(char) * letters);
if (buff == '\0')
return ('\0');
read_f = read(open_f, buff, letters);
if (read_f == '\0')
return ('\0');
write_f = write(STDOUT_FILENO, buff, read_f);
free(buff);
close(open_f);
return (write_f);
}
