#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes strings
 *@n: the strings pointer
 *
 * Return: n
 */
char *cap_string(char *n)
{
  int i;
  i = 0;
  while (n[i] != '\0')
    {
      if (n[i] >= 'a' && n[i] <= 'z')
	{
	i++;
    
  if (n[i - 1] == ' ' || n[i - 1] == '\t'
      || n[i - 1] == '\n' || n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.' || n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' || n[i - 1] == '(' || n[i - 1] == ')' || n [i - 1] == '{' || n[i - 1] == '}')
    
      n[i - 1] = n[i - 1] - 32;
	}
    }
  return (n);
}
