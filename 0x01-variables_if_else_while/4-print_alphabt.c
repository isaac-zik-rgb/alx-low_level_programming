#include <stdio.h>
/**
 * main - A program that print all the alphabet in lowercase except e and q
 *
 * Return: O (Success)
 */
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
if (a != 101 && a != 113)
putchar(a);
}
putchar(10);
return (0);
}
