#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file - append the text of a file
 *@text_content: the cotent of the file
 *@filename: the name of the file
 *Return: reyturn 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int open_f = 0, cont = 0, write_f = 0;
if (filename == '\0')
return (-1);
open_f = open(filename, O_WRONLY | O_APPEND);
if (open_f == -1)
return (-1);
if (text_content)
{
for (cont = 0; text_content[cont] != '\0'; cont++)
{
}
write_f = write(open_f, text_content, cont);
if (write_f == -1 || write_f == -1)
return (-1);
}
close(open_f);
return (1);
}
