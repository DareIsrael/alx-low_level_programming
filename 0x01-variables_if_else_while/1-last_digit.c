#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - A Programs that prints the size
*Return: 0 (Success)
*/
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
if (ld == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ld);
}
if (ld < 6 && m != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}
