#include <stdio.h>

/**
*main - Prints all the possible combinations of
*three digits
*Return: Always 0 (Success)
*/
int main(void)
{
int n, m, l;

for (n = '0'; n <= '7'; n++)
{
for (m = '1'; m <= '8'; m++)
{
for (l = '2'; l <= '9'; l++)
{
if (n < m && m < l)
{
putchar(n);
putchar(m);
putchar(l);
if (n != '7' || m != '8' || l != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
