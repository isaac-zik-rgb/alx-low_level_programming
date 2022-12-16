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
for (a = 0; a < 10; a++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
