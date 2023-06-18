#include <stdio.h>
/**
*main - A Programs that prints the size
*Return: 0 (Success)
*/
int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

