#include <stdio.h>
#include "main.h"
/**
 * _isalpha - A function that check for alpha characters
 *@c: Returns an integar parameter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}
