#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - This function prints a diagonal line
 * @n: a number of times its should print
 *
 * Return: Alawys 0 (Success)
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <  n; i++)
{
for (y = 0; y < n; y++)
{
if (y == i)
_putchar('\\');
else if (y < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
