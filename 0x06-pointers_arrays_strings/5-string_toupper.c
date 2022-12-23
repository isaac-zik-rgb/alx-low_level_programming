#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert all lowercase character to uppercase
 * @str: a character pointer
 * Return: a string pointer
 */
char *string_toupper(char *str)
{
/*intializing my variables*/
int i;
i  = 0;
while (str[i] != '\0')
{
/*comparing strings letters*/
if ((str[i] >= 'a' && str[i] <= 'z'))
/*converting to upper*/
/*whatever letter - 32, using ansi code*/
str[i] = str[i] - 32;
++i;
}
return (str);
}
