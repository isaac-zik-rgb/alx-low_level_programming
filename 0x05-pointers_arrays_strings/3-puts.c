
#include <stdio.h>
#include "main.h"
/**
 * _puts - A function that print a strings to the standard input
 * @str: character parameter is passed
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
  for (; *str != '\0'; *str++)
    {
      _putchar(*str);
    }
  _putchar('\n');
}
