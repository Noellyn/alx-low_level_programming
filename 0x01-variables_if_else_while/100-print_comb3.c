#include <stdio.h>

/**
*main - Prints all possible combinations
*of two numbers
*Return: Always 0 (success)
*/
int main(void)
{
int m, n;
for (m = '0'; m <= '8'; m++)
{
for (n = '1'; n <= '9'; n++)
{
if (m < n)
{
putchar(m);
putchar(n);
if (m != '8' || n != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
