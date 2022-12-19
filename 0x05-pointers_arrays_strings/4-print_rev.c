#include <stdio.h>
#include "main.h"
/**
 * print_rev - this function print in rev
 * @s: eeturns a character variable as parameter
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
for (; *s == '\0'; s--)
{
_putchar(*s);
}
_putchar('\n');
}
