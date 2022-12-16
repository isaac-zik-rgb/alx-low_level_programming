#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - A function that print most numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int x;
for (x = 48; x <= 57; x++)
if (x != 2 && x != 4)
_putchar(x);
_putchar(10);
}
