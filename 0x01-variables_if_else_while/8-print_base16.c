#include <stdio.h>

/**
*main - Prints all the numbers of base16
*in lower case
*Return: Always 0 (success)
*/
int main(void)
{
int n;
char ch;

for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
