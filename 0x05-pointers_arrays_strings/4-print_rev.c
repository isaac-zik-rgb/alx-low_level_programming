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
  char i;
  for (i ='\0'; *s >= i; s--)
    {
      _putchar(*s);
	}
_putchar('\n');
}
