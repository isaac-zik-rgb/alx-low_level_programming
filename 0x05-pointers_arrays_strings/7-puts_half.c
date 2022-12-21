#include <stdio.h>
#include "main.h"
/**
 * puts_half - A function that print half of a strings character
 * @str - a pointer that points to the varaible with the character data type
 * Return: Always 0 success
 */
void puts_half(char *str)
{
  int i, y, n;
  i = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  for (y = 0; y <= (i - 1) / 2; y ++)
    {
      if (y % 10 != 1)
	{
	  _putchar(str[y]);
	}
      else
	{
	for (n = 0; n < (i - 1) / 2; n++)
	  {
	    _putchar(str[n % 10]);
	  }
	}
    }
  _putchar('\n');
}
