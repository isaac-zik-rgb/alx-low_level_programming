#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - A progarm that print alphabet 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
  int i, x;
  x =0;
  while (x < 10)
    {
      i = 97;
      while(i <= 122)
	{
	  _putchar(i);
	  i++;
	}
      _putchar(10);
      x++;
    }
}
