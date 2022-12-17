#include <stdio.h>
#include "main.h"
/**
 * print_line - A funtion that print a striaght line
 * @n: n is the number of times it should be printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x;
for (x = 1; x <= n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
