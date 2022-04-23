#include "main.h"
#include <stdio.h>
/**
 * _char - Funtion that print a character
 * @argv: is a va_list
 * @str: copy of format
 * @pos: position inside array for concatenate.
 * Return: position plus one
 */
int _char(va_list argv, char *str, int pos)
{
	int c;
	char ch;

	c = va_arg(argv, int);
	ch = c;
/*
 *	printf("PROCESS_printf ch  = %c\n", ch);
 */
	str[pos] = ch;
/*
 *	printf("***_char  str = %s\n", str);
 *	printf("_char  str[pos %d] =**%c**\n", pos, str[pos]);
 *	printf("_char  str[pos - 1 %d] =**%c**\n", pos - 1, str[pos - 1]);
 *	printf("_char  str[pos - 2 %d] =**%c**\n", pos - 2, str[pos - 2]);
 *	printf("_char  str[pos - 4 %d] =**%c**\n", pos - 4, str[pos - 4]);
*/
	return (pos + 1);
}

/**
 * _str - Funtion that print string
 * @argv: is a va_list
 * @s: copy of format.
 * @pos: position inside array for concatenate
 * Return: pos plus len of str
 */
int _str(va_list argv, char *s, int pos)
{
	char *str;

	str = va_arg(argv, char*);
	if (str == NULL)
		return (pos + 1);
	/*printf("_string  s1 = %s position= %d\n", s, pos);*/
	_strcat(s, str);
	/*printf("_string  s2 = %s position = %d \n", s, pos);*/
	if (pos < 1)
	{
		/*printf("IF _str position_new STR = %d \n", _strlen(str) - 2);*/
		return (_strlen(str) - 2);
	}
	else
		return (_strlen(str) + pos);
}

/**
 * _percent - Funtion that print a char percentage
 * @s: char for copy
 * @pos: position inside array for concatenate
 * Return: pos plus one
 */
int _percent(char *s, int pos)
{
	s[pos] = '%';
	return (pos + 1);
}

/**
 * _int - Funtion that print string
 * @argv: is a va_list
 * @s: copy of format
 * @pos: position inside array for concatenate
 * Return: pos plus len of str
 */
int _int(va_list argv, char *s, int pos)
{
	char *aux = NULL;
	int num;

	aux = assign_buffer();
	num = va_arg(argv, int);
	if (!num)
		return (0);
	_itoa(num, aux);
	_strcat(s, aux);
	num = _strlen(aux);
	free(aux);
	return (num + pos);
}
