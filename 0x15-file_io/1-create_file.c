#include "holberton.h"
#include <stdlib.h>
/**
 * create_file - create a file with r and w permissions
 *@text_content: the cotent of the file
 *@filename: the name of the file
 *Return: reyturn 0
 */
int create_file(const char *filename, char *text_content)
{
int open_f = 0, cont = 0, write_f = 0;
if (filename == '\0')
return (-1);
open_f = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC ,S_IRUSR | S_IWUSR);
if (open_f == '\0')
return (-1);
if (text_content)
{
for (cont = 0; text_content[cont] != '\0'; cont++)
{
}
write_f = write(open_f, text_content, cont);
if (write_f =='\0')
return (-1);
}
close(open_f);
return (1);
}
