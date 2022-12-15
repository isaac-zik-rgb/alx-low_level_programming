#include <stdio.h>
#include "main.h"
/**
 * print_sign - A function that print a sign of a number
 *@n: Returns an integer value at execution
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
  int r;
  r = if (n > 0)
    {
     _putchar('+');
     _putchar(',');
     _putchar(' ');
    }
  else if ( n == 0)
    {
     _putchar('0');
     _putchar(',');
     _putchar(' ');
    }
  else (n < 0)
	 {
	  _putchar('-');
	  _putchar(',');
	  _putchar(' ');
	 }
  return (r);
}
