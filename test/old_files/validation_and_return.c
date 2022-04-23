#include "main.h"
/**
 * validation_and_return - function that produces output according to a format
 * @s:is a character string. The format string is composed of zero or
 * more directives
 * @ap: list content
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
char *validation_and_return(va_list ap, char *s)
{
	char *str_aux = NULL;
	int aux1 = 0, aux2 = 0, aux3;
	input args[] = {
	{"c", _char, _percent}, {"i", _int, _percent},
	{"d", _int, _percent}, {"s", _str, _percent},
	{"%", _char, _percent}, {NULL, NULL, NULL}};

	str_aux = malloc(sizeof(char) * _strlen(s));
	while (s[aux1] != '\0')
	{
		if (s[aux1] == '%')
		{
			for (aux3 = 0; aux3 < 5; aux3++)
			{
				if (*(args[aux3].array) == s[aux1 + 1] && s[aux1 + 1] != '%')
				{
					aux2 = args[aux3].function_opc(ap, str_aux, aux2);
					aux1 += 2;
				}
			}
		}

		if (aux3 == 5 && s[aux1] == '%')
		{
			aux2 = args[4].function_opc(ap, str_aux, aux2);
			if (s[aux1 + 1] != '%')
				aux1++;
			else
				aux1 += 2;
		}

		if (s[aux1] != '%')
			str_aux[aux2] = s[aux1];
		aux1++,	aux2++;
	}
	_strcpy(s, str_aux);
	free(str_aux);

	return (s);
}
