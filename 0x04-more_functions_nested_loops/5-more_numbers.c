#include <stdio.h>
#include "main.h"
/**
 * more_numbers - A function that print more numbers
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
  int i, a;
  i = 0;
  while (i < 11)
    {
      a = 0;
      while (a <= 14)
	{
	  _putchar(a);
	  a++;
	}
      _putchar(10);
      i++
	}
  putchar(10);
}
