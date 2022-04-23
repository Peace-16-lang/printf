#include "main.h"

/**
 * _printf - Outputs a formated string.
 * @format: Character string to print - may contain directives.
 * Return: The number of characters printed.
 * Excluding the null pointer at the end of the string)
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int size = 0;
	char *str_formated = NULL;
	int len = 0;

	if (format == NULL && ap == NULL)
		return (0);

	while (format[size] != '\0')
		size++;

	if (size > 1024)
	{
		str_formated = malloc(sizeof(char) * size);
		if (str_formated == NULL)
			return (1);
	}

	else
	str_formated = assign_buffer();

	for (i = 0; i < size; i++)
		str_formated[i] = format[i];

	str_formated[i] = '\0';
	va_start(ap, format);

	validation_and_return(ap, str_formated);
	va_end(ap);

	len = _strlen(str_formated);
	_write(str_formated);

	free(str_formated);

	return (len);
}
