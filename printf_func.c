#include "main.h"
/**
 * opFunction - Second function for _printf
 * @count: count
 * @list: list arguments
 * @types: Types of JSON
 * @format: format
 * Return: Len
*/
int opFunction(int count, va_list list, typedate types[], const char *format)
{
int i = 0, j = 0, b = 0, spaces = 0;
while (format && format[i])
{
	b = 0;
	if (format[i] == '%' && format[i + 1] == '\0')
	return (-1);
	else if (format[i] == '%' && format[i + 1] != '%')
	{
		for (j = 0; j < 7; j++)
		{
			if (format[i] == '%' && format[i + spaces + 1] == types[j].type)
			{
				count += types[j].fun(list);
				i += spaces + 1;
				b = 1;
			}
		}
		if (b == 0 && format[i + 2] != '\n')
		{
			_putchar(format[i]);
			count++;

		}
		else if (b == 0 && format[i + 2] == '\n')
		{
			_putchar(format[i]);
			count++;
		}
	}
	else if (format[i] == '%' && format[i + 1] == '%')
	{
		i += _putchar('%');
		count += 1;
	}
	else
		count += _putchar(format[i]);
	i++;
}
	return (count);
}
/**
 * _printf - Main Printf func
 * @format: Format
 * Return: len
 */
int _printf(const char *format, ...)
{
typedate types[] = {
{'s', printString},
{'c', printChar},
{'i', printInteger},
{'d', printDecimal},
{'b', printBinary},
{'o', printOctal},
{'u', printUnsigned},
{'r', print_rev},
{'R', print_rot13}
};
va_list list;
int count = -1;

if (format != NULL)
{
va_start(list, format);
count = 0;
count = opFunction(count, list, types, format);
va_end(list);
}
return (count);
}
