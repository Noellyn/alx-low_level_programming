#include <stdio.h>

/**
* main - prints the alphabets in reverse order
*Return: Always 0 (Success)
*/
int main(void)
{
char rv;

for (rv = 'z'; rv >= 'a'; rv--)
{
putchar(rv);
}
putchar('\n');
return (0);
}
