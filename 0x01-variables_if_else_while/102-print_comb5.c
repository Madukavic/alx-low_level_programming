#include <stdio.h>

/**
 * main - print all possible combinations of two digits number
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
int i;
int p;
for (i = 0 ; i < 100 ; i++)
{
for (p = 0 ; p < 100 ; p++)
{
if (p > i)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
