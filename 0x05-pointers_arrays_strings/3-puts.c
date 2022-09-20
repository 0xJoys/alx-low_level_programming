#include "main.h"
/**
 * _puts - print a string followed a new line to stdout
 * @str pointer to str
 * Return: noting
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
