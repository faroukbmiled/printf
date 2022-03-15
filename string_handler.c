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

/**
* print_rot13 - print a string how rot13
* @list: args passed
* Return: str
*/
int print_rot13(va_list list)
{
char *str;
int i, j;
char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
str = va_arg(list, char *);
if (str == NULL)
{
str = "(ahyy)";
}
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j <= 52; j++)
{
if (str[i] == ch1[j])
{
_putchar(ch2[j]);
break;
}
}
if (j == 53)
_putchar(str[i]);
}
return (i);
}

/**
 * print_rev - prints a string in reverse
 * @list: arg
 * Return: length
 */
int print_rev(va_list list)
{
char *str;
int i, count = 0, len;
str = va_arg(list, char*);
if (str == NULL)
str = "(llun(";
while (str[i] != '\0')
i++;
for (len = i - 1; len >= 0; len--)
{
_putchar(str[len]);
count++;
}
return (count);
}
