#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * printUnsigned - Print Unsigned
 * @list: Var list
 * Return: number u
 */
int printUnsigned(va_list list)
{
int *count;
unsigned int num;

count = malloc(sizeof(*count));

if (!count)
exit(-1);

*count = 0;
num = va_arg(list, unsigned int);

(*count) = printUnsignedDigit(num, count);

return (*count);
}

/**
 * printUnsignedDigit - Print Unsigned
 * @num: int
 * @count: int
 * Return: count
 */
int printUnsignedDigit(unsigned int num, int *count)
{
if (num / 10)
printUnsignedDigit(num / 10, count);

(*count) += _putchar((num % 10) + '0');
return (*count);
}
