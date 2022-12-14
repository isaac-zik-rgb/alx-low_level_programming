#include <stdio.h>
#include "main.h"
/**
 * _islower - A function that checks lower characters
 *
 * Return: 1 success
 */
int _islower(int c)
{
 return (c >= 97 && c <= 122) || (c >= 65 && c <= 90);
}
