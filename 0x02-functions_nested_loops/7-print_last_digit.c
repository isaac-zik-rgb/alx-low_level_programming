#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - this function print last digit of a number
 * @x: returns the value as integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
int i;
if (x < 0)
{
x = -x;
}
i = x % 10;
if (i < 0)
{
i = -i;
}
_putchar(i + '0');
return (i);
}

