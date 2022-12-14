#include <stdio.h>
#include "main.h"
/**
 * print_number - prints integer number to the stdout
 *@n: n being the value passed to it
 *
 * Return: n
 */
void print_number(int n)
{
  unsigned i;
  if (n < 0)
    {
      _putchar('-');
      n *= -1;
    }
  i = n;
  
  if (i / 10)
    print_number(i / 10);
    _putchar(i % 10 + '0');
}
