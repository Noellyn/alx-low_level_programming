#include <stdio.h>

/**
*main - Prints the alphabet in lower and upper cases
*Return: Always 0 (Success)
*/
int main(void)
{
int mc;

for (mc = 'a'; mc <= 'z'; mc++)
putchar(mc);
for (mc = 'A'; mc <= 'Z'; mc++)
putchar(mc);
putchar('\n');
return (0);
}
