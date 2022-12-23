#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compare two strings value
 *@s1: first string
 *@s2: second strings
 * Return: defference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
while (s1[i] != '\0' && s2[i] != '\0')
{
i++;
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
