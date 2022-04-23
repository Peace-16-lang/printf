#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: string final
 * @src: string for concatenate
 * Return: pointer with the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	short i = 0;
	int len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}
