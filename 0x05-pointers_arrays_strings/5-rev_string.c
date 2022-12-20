#include <stdio.h>
#include "main.h"
/**
 * rev_string - this function reverses a strings
 * @s: A character data type is paased as a pointer parameter
 *
 * Return: Always 0 success
 */
void rev_string(char *s)
{
  int i;
  i = 0;
  while (s[i] != '\0')
    {
      i++;
    }
  for (i -= 1; i >= 0; i--)
    return (s[i]);
}
