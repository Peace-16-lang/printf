#include "main.h"
/**
 * *_strncpy - functions copy at most n characters from src into dst.
 * If src is less than n characters long, the remainder of dst is
 * filled with `\0' characters.
 * @dest: string final
 * @src: string for concatenate
 * @n: number of characters to concatenate
 * Return: pointer with the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len_src = _strlen(src);

	while (i < n)
	{
		if (i < len_src)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
