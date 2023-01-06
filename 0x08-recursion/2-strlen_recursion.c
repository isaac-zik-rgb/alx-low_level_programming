#include "main.h"
/**
 *_strlen_recursion - returns length of a string
 *@s: a pointer to the stirng
 *Return: an interger value
 */
int _strlen_recursion(char *s)
{
  /*while *s point to tge first index of the array*/
if (*s == '\0')
{
return (0);
}
/*
 *Return: @1 + the value of the arrary
 * using +1 to move the pointer to the nex character in the array
*/
else
return (1 + _strlen_recursion(s + 1));
}
