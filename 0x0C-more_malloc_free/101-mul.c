#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - make a calloc function
 *@size: the size
 *@nmemb: the number of sizes
 *Return: reyturn 0
 */
int hola(int hola)
{
  return (hola);
}
/**
 * _calloc - make a calloc function
 *@size: the size
 *@nmemb: the number of sizes
 *Return: reyturn 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *array;
  unsigned int i;
  if (nmemb == 0 || size == 0)
    return ('\0');
  array = malloc(nmemb * size);
  if (array == '\0')
    return ('\0');
  for (i = 0; i < nmemb * size; i++)
    array[i] = '\0';
  return (array);
}
/**
 * _strdup - copy an strin
 *@str: the string
 *Return: reyturn 0
 */
int _strlen(char*s)
{
  int len = 0;
  while (s[len] != '\0')
    {
      len++;
    }
  return (len);
}
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
  char *mem;
  unsigned int mal;
  (void) argc;
  if (argc != 3)
    {
      printf("Error\n");
      exit(98);
    }
  mal = _strlen(argv[1]) + _strlen(argv[2]) + 1;
  mem = _calloc(mal, sizeof(char));
  if (mem == '\0')
    return ('\0');
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
  return (0);
}
