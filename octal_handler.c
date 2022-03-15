#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * printOctal - Print Octal
 * @list: Var list
 * Return: number u
 */
int printOctal(va_list list)
{
int *count;
unsigned int num;
count = malloc(sizeof(*count));
if (!count)
exit(-1);
*count = 0;
num = va_arg(list, unsigned int);
(*count) = printDigitOctal(num, count);
return (*count);
}

/**
 * printDigitOctal - Print Unsigned
 * @num: int
 * @count: int
 * Return: count
 */
int printDigitOctal(unsigned int num, int *count)
{
if (num / 8)
printDigitOctal(num / 8, count);
(*count) += _putchar((num % 8) + '0');
return (*count);
}
