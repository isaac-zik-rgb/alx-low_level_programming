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
return   (if (n > 0)
      {
      putchar('+');
    }
  else if (n == 0)
    {
      putchar('0');
    }
  else (n < 0)
	 {
	   putchar('-');
	 });
 
