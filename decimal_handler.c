#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * printDecimal - Print Decimal
 * @list: Var list
 * Return: number decimal
 */
int printDecimal(va_list list)
{
int  decimal;

unsigned int count, count2, num, aux;

count = 0;

decimal = va_arg(list, int);
if (decimal < 0)
{
num = (decimal * -1);
count += _putchar('-');
}
else
{
num = decimal;
}
aux =  num;
count2 = 1;
while (aux > 9)
{
aux /= 10;
count2 *= 10;
}
while (count2 >= 1)
{
count += _putchar(((num / count2) % 10) + '0');
count2 /= 10;
}
return (count);
}

/**
 * printInteger - Print Decimal
 * @list: Var list
 * Return: number decimal
 */
int printInteger(va_list list)
{
	return (printDecimal(list));
}
