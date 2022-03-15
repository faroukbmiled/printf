#include "main.h"
#include <stdarg.h>
/**
 * printBinary - Print number binary
 * @list: List elemnts
 * Return: count
 */
int printBinary(va_list list)
{
unsigned int i, count, num, bin, p[32];
i = 0, count = 0;
num = va_arg(list, int);
if (num < 1)
{
_putchar(48);
count++;
return (count);
}
else
{
while (num > 0)
{
bin = num % 2;
num /= 2;
p[count] = bin;
count++;
}
i = count - 1;
while (i > 0)
{
_putchar('0' + p[i]);
i--;
}
_putchar('0' + p[i]);
}
return (count);
}
