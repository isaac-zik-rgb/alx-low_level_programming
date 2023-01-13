#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdub - a dublicated strings
 * @str: a pointer to a string
 *
 * Return: a pointer to an allocated memory on success
 */
char *_strdub(char *str)
{
  char *strn;
  int s;
  s = sizeof(str) / sizeof(char);
  strn = malloc(sizeof(char) * s);
  int i;
  if (s == NULL || strn == NULL)
    return (NULL);
  for (i = 0; str[i]; i++)
    s[i] = str[i];
  s[i] = '\0';
  return (s);
}
