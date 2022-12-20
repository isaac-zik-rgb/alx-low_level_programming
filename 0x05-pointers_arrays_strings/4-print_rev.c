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
  while (*s != '\0')
    {
      if (*s > *(s[0]))
	{
	s--;
	_putchar(*s);
	}
    }
  _putchar('\0');
}
