#include <stdio.h>
/**
 * main -A program that print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", 1);
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
