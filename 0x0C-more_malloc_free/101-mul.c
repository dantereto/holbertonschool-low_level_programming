#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copy an strin
 *@str: the string
 *Return: reyturn 0
 */
int check(char **av)
{
  int j, i;
  for (i = 1; i < 3; i++)
    {
      for (j = 0; av[i][j]; j++)
	{
	  if (av[i][j] < '0' || av[i][j] > '9')
	    return (1);
	}
    }
  return (1);
}
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
    {
    printf("Error\n");
    exit(98);
    }
  if (argc != 3 || check(argv))
    {
      printf("Error\n");
      exit(98);
    }
  return (0);
}
