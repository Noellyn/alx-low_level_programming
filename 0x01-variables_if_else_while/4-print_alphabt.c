#include <stdio.h>

/**
*main - Prints the alphabet in lower case
*except e and q
*Return: Always 0 (Success)
*/
int main(void)
{
char low, e, q;

e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
