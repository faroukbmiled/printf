#include "main.h"
/**
 * _Buffer - Buffer
 * @size: Size
 * Return: Char *
*/
char *_Buffer(int size)
{
char *buffer = malloc(1024 * size);
if (buffer == NULL)
return (NULL);
return (buffer);
}
