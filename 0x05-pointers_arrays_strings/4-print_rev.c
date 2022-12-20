#include <stdio.h>
#include "main.h"
/**
 * print_rev - this function print in rev
 * @s: eeturns a character variable as parameter
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
  int  c;
  c = 0;
  while (s[c] != '\0')
    {
      c++;
	}
  for (c -= 1; c >= 0; c --)
    {
      _putchar(s[c]);
    }
  _putchar('\n');
}
