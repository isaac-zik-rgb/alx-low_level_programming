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
  int r, a, b;
  r = (n > 0);
  a = (n == 0);
  b = (n < 0);
  if (n == r)
    {
      _putchar('+');
      _putchar(',');
      _putchar(' ');
      return (r);
    }
  else if (n == a)
    {
      _putchar('0');
      _putchar(',');
      _putchar(' ');
	return (a);
    }
  else (n == b)
	 {
	   _putchar('-');
	   _putchar(',');
	   _putchar(' ');
	   return (b + '0');
	 }
  
