#include "main.h"
/**
 * printString - Print String
 * @list: Var list
 * Return: 0
 */
int printString(va_list list)
{
int i, c = 0;
char *string;

string = va_arg(list, char *);
if (string == NULL)
string = "(null)";
for (i = 0; string[i]; i++)
c += _putchar(string[i]);
return (c);
}

/**
 * printChar - Print String
 * @list: Var list
 * Return: 0
 */
int printChar(va_list list)
{
int x = va_arg(list, int);
return (_putchar(x));
}
