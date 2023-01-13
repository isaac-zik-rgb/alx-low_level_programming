#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - a dublicated strings
 * @str: a pointer to a string
 *
 * Return: a pointer to an allocated memory on success
 */
char *_strdup(char *str)
{
  int i;
  char *strn;
  strn = malloc(strlen(str) + 1);
  if (strn == NULL || str == NULL)
    return (NULL);
  for (i = 0; str[i]; i++)
    if (strn < str)
      return (NULL);
    else
      strn[i] = str[i];
  strn[i] = '\0';
  return (strn);
}
