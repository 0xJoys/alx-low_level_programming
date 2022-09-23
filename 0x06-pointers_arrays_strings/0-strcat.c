#include "main.h"
/**
 * *_strcat - funtcion that concatenates two strings
 * @dest: destination char
 * @src: source pointer
 * Retrun: dest
 */
char *_strcat(char *dest, char *src)
{
unsigned int x = 0;
unsigned int y = 0;
while (*(dest + x) != '\0')
x++;
while (*(src + y) != '\0')
{
*(dest + x) = *(src + y);
x++;
y++;
}
return (dest);
}
