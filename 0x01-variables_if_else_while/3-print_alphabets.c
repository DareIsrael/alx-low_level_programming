#include <stdio.h>
/**
*main - A Programs that prints the size
*Return: 0 (Success)
*/
int main(void)
{
char n;
n = 97;
char m;
m = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
