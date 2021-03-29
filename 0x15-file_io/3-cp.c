#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file - append the text of a file
 *@text_content: the cotent of the file
 *@filename: the name of the file
 *Return: reyturn 0
 */
void copy_file(const char *filename, char *text_content)
{
  int open_f, create_f, read_f, write_f;
  char *buff[1024];
  open_f = open(filename, O_RDONLY)
    if (open_f == '\0' || filename == '\0')
      {
	dprintf("Error: Can't read from file NAME_OF_THE_FILE %s\n", filename);
      }	exit(98);
  create_f = open(filename, O_CREAT | O-WRONLY | O_TRUNC, 0644);
  while ((read_f = read(open_f, buff, 1024) > 0)
    {    
      write_f = write(create_f, buff, read_f)
	if (write_f != read_f || create_f == -1)
	  {
	    dprint("Error: Can't write to NAME_OF_THE_FILE %s\n", text_content);
	    exit(99);
	  }
    }	 
    if (close(create_f) == -1)
      {
	dprint("Error: Can't close fd FD_VALUE %d\n", create_f);
	exit(100);
      }
    if (close(open_f) == -1)
      {
	dprint("Error: Can't close fd FD_VALUE %d\n", open_f);
	exit(100);  
      }
    
