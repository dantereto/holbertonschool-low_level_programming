#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - make a realloc function
 *@old_size: the old size
 *@new_size: the new size
 *@ptr: the pointer
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
  (void) argc;
  if (argv[1] && argv[2])
    {
      printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
      return (0);
    }
  else if (argv[3])
    printf("Error\n");
  return (-1);
}
