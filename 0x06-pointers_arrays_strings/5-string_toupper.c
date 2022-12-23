#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert all lowercase41;320;0c41;320;0c character to uppercase
 *
 * Return: a string pointer
 */
char *string_toupper(char *str)
{
  int i;
  i  = 0;
  while (str[i] != '\0')
    {
 if ((str[i] >= 'a' && str[i] <= 'z'))
   str[i] = str[i] - 32;
 ++i;
    }
  return (str);
}
