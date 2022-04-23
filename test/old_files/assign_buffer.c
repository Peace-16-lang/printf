#include "main.h"
/**
 * assign_buffer - Function that create a buffer for strings allocating space
 * in memory dynamic.
 * Return: pointer type char (Buffer)
 */
char *assign_buffer(void)
{
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		exit(128);
	*buffer = '\0';
	return (buffer);
}
