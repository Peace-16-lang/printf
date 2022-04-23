#include "main.h"
/**
 * _write - Function that print string to stdout
 * @str: pointer string
 * Return: system call
 */
int _write(char *str)
{
	int len = _strlen(str);

	return (write(1, str, len + 1));
}
