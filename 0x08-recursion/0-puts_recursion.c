#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - print out a string in the standard out-put
 *@s: a pointer to a character variable
 * Return void
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      return;
    }
  else
    {
      _putchar(*s);
      _puts_recursion(s + 1);
      return;
    }
}
