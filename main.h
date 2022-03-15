#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * struct typeprint - create libraries
 * @type: char
 * @fun: point void of list
 * Description: struct
 */
typedef struct typeprint
{
	char type;
	int (*fun)(va_list list);
} typedate;
/*Second function for _printf */
int opFunction(int count, va_list list, typedate types[],
const char *format);
int printUnk(int i, int spaces, const char *format, int band);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
int printString(va_list list);
int printChar(va_list list);
int printDecimal(va_list list);
int printInteger(va_list list);
int printBinary(va_list list);
int printUnsigned(va_list list);
int printUnsignedDigit(unsigned int num, int *count);
int printOctal(va_list list);
int printDigitOctal(unsigned int num, int *count);
char *_Buffer(int size);
#endif
