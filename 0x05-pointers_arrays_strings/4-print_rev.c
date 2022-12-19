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
  int i, b;
  i = s[0];
  b = '\0';
  for (*s = b; *s > i; s--)
    {
      _putchar(*s);
    }
  _putchar('\n');
}
