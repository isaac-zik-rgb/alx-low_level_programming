#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert all lowercase character to uppercase
 *
 * Return: a string pointer
 */
char *string_toupper(char *)
{
  int i, ziko, str;
  i = 0;
  ziko = 'a' - 'A';
  while (*str[i])
    {
 if ((str[i] >= 'a' && str[i] <= 'z'))
   *str[i] = ziko;
 i++;
    }
}
