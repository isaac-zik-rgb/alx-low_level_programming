#include "main.h"
/**
 * _strchr - point to the first occurance of a character
 *@s: a pointer to a charachter
 *@c: the character in the array
 *Return: a pointer
 */
 char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
