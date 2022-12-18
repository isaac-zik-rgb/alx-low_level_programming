#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
int print_last_digit(int x)
{
  int i;
  i = x % 10;
  if (i < 0)
    {
      i *= -1
	}
  _putchar(i + '0');
  return(i);
}
