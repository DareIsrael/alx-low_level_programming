#include <stdio.h>
/**
*main - A Programs that putchar
*Return: 0 (Success)
*/
int main(void)
{
int c;

c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar("\n");
return (0);
}

