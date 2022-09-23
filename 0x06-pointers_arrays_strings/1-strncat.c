#include "main.h"
/**
 * *_strncat - concatenates two stings
 * @dest: is our given prototype
 * @src: is the second prototype
 * @n: number of bytes to receive
 * Return: dest
 */
char *_strncat(char *dest, char *src. int n)
{
	unsigned int x = 0;
	int y = 0;
	while (*(dest + x) != '\0')
		i++;
	while (*(src + y) != '\0')
	{
		if (y < x)
		{
			*(dest + x) = *(src + y);
			x++;
		}
		y++;
	}
	return (dest);
}
