#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert all lowercase41;320;0c41;320;0c character to uppercase
 *
 * Return: a string pointer
 */
char *string_toupper(char *str)
{
  int  ziko, i;
  i  = 0;
  ziko = 'a' - 'A';
  while (str[i] != '\0')
    {
 if ((str[i] >= 'a' && str[i] <= 'z'))
   str[i] = ziko;
 ++1;
    }
  return (str);
}
