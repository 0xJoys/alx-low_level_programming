#include "main.h"
/**
 * _atoi - a function that coverts string to integer
 * @s: An put string
 * Return: integar from coversion
 */
int _atoi(char *s)
{
int i = 1;
unsigned int total = 0;
char null_flag = 0;
while (*s)
{
if (*s == '-')
i *= -1;
if (*s >= '0' && *s <= '9')
{
null_flag =1;
total = total * 10 + *s - '0';
}
else if (null_flag)
break;
s++;
}
if (i < 0)
total = (-total);
return (total);
