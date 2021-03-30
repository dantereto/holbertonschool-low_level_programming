#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * copy_f - append the text of a file
 *@text_content: the cotent of the file
 *@filename: name file
 *Return: reyturn 0
 */
int copy_f(const char *filename, const char *text_content)
{
int open_f, create_f, read_f;
char buff[1024];
mode_t mode;
mode = S_IRUSR  | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
open_f = open(filename, O_RDONLY);
if (filename == '\0' || open_f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
create_f = open(text_content, O_CREAT | O_WRONLY | O_TRUNC, mode);
while ((read_f = read(open_f, buff, 1024)) > 0)
{
if (write(create_f, buff, read_f) != read_f || create_f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", text_content);
exit(99);
}
}
if (read_f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
if (close(create_f) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", create_f);
exit(100);
}
if (close(open_f) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_f);
exit(100);
}
return (0);
}
/**
 * main - check the code for Holberton School students.
 *
 *@av: av
 *@ac: ac
 * Return: Always 0.
 */
int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_f(av[1], av[2]);
return (EXIT_SUCCESS);
}
