#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - a dublicated strings
 * @str: a pointer to a string
 *
 * Return: a pointer to an allocated memory on success
 */
char *_strdup(char *str)
{
int i;
char *strn;
int j = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
i++;
}
strn = malloc(strlen(str) + 1);
if (strn == NULL)
return (NULL);
for (j = 0; str[j]; j++)
strn[j] = str[j];
return (strn);
}
