#include "main.h"
/**
 * print_rev - that print a string, in reverse
 * @s: followed by new line
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
