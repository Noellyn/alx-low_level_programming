#include <stdio.h>

/**
*main - prints the size of the various types
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
  printf("size of a char: %d byte(s)\n", (int) sizeof(char));
  printf("size of an int: %d byte(s)\n", (int) sizeof(int));
  printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
  printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
  printf(stderr, "size of a float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
