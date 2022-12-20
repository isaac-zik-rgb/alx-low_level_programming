#include <stdio.h>
#include "main.h"
/**
 * puts2 - Function that print all character strings
 * @s: A character data type is passes as a parameter
 *
 * Return: Always 0 success
 */
void puts2(char *str)
{
  int i, c;
  c = 0;
  while (str[c] != '\0')
    {
      c++;
    }
  for (i = 1; i < c; i += 2)
    {
      _putchar(str[i]);
    }
  _putchar('\n');
}
