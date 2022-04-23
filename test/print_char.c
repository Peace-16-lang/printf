#include "main.h"
/**
 *print_char - prints out the character c to stdout
 *@c: The character to print
 *
 *Return:1
 */
int print_char(va_list c)
{
	unsigned char m_char;

	m_char = va_arg(c, int);
	_putchar(m_char);
	return (1);
}

/**
 *print_percentage - %
 *
 *Return: 1;
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
