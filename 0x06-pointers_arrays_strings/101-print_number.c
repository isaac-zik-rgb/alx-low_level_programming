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
  while (n > 0)
    _putchar(n + '0');
}
