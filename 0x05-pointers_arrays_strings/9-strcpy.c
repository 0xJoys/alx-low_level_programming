#include "main.h"
/**
 * *_strcpy - copies the string pointed to the src
 * @dest: char type string
 * @scr: char type string
 * Description: copy the string pointed to by the pointer src to the buffer pointed to by dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} 
while (scr[i] != '\0');
return (dest);
}
