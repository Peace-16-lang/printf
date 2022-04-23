#include "main.h"
/**
 * _itoa - Function that prints any integer positive or negative
 * @n: integer positive or negative
 * @s: array by concatenate a number for print
 */
void _itoa(int n, char *s)
{
	char *number = NULL;

	number = assign_buffer();
	if ((n < 10 && n > 0) || n == 0)
		number[0] = '0' + n;
	else if (n < 0)
		proc_negative_num(n, number);
	else if (n > 9 && n < 99)
		proc_number_2_digits(n, number);
	else if (n > 99 && n < 1e3)
		proc_number_3_digits(n, number);
	else if (n > 999 && n < 1e4)
		proc_number_4_digits(n, number);
	else if (n > 99999 && n < 1e6)
		proc_number_6_digits(n, number);
	_strcpy(s, number);
	free(number);
}
/**
 * proc_number_2_digits - receives a number for slice and print
 * @number: integer positive or negative
 * @array: concatenate a number for print
 */
void proc_number_2_digits(int number, char *array)
{
	if (array[0] == '-')
	{
		array[1] =
		array[2] = '0' + (number % 10);
	}
	else
	{
		array[0] = '0' + (number / 10);
		array[1] = '0' + (number % 10);
	}
}
/**
 * proc_number_3_digits - receives a number for slice and print
 * @number: integer positive or negative
 * @array: concatenate a number for print
 */
void proc_number_3_digits(int number, char *array)
{
	int aux = 0;

	aux = number / 10;
	if (array[0] == '-')
	{
		array[1] = '0' + (number / 10);
		array[2] = '0' + (aux % 10);
		array[3] = '0' + (number % 10);
	}
	else
	{
		array[1] = '0' + (number / 10);
		array[2] = '0' + (aux % 10);
		array[3] = '0' + (number % 10);
	}
}
/**
 * proc_number_4_digits - receives a number for slice and print
 * @number: integer positive or negative
 * @array: concatenate a number for print
 */
void proc_number_4_digits(int number, char *array)
{
	int aux = 0;
	int aux2 = 0;

	aux = number / 100;
	if (array[0] == '-')
	{
		array[1] = '0' + (aux / 10);
		aux2 = number % 1000;
		aux2 = aux2 / 10;
		array[2] = '0' + (aux2 / 10);
		array[3] = '0' + (aux2 % 10);
		array[4] = '0' + (number % 10);
	}
	else
	{
		array[0] = '0' + (aux / 10);
		aux2 = number % 1000;
		aux2 = aux2 / 10;
		array[1] = '0' + (aux2 / 10);
		array[2] = '0' + (aux2 % 10);
		array[3] = '0' + (number % 10);
	}
}
/**
 * proc_number_6_digits - receives a number for slice and print
 * @n: integer positive or negative.
 * @array: concatenate a number for print
 */
void proc_number_6_digits(int n, char *array)
{
	int aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;

	aux1 = n % 1000000;
	aux1 = aux1 / 1e4;
	if (array[0] == '-')
	{
		array[1] = '0' + (aux1 / 10);
		aux2 = n % 100000;
		aux2 = aux2 / 1e3;
		array[2] = '0' + (aux2 / 10);
		aux3 = n % 10000;
		aux3 = aux3 / 1e2;
		array[3] = '0' + (aux3 / 10);
		aux4 = n % 1000;
		aux4 = aux4 / 10;
		array[4] = '0' + (aux4 / 10);
		array[5] = '0' + (aux4 % 10);
		array[6] = '0' + (n % 10);
	}
	else
	{
		array[0] = '0' + (aux1 / 10);
		aux2 = n % 100000;
		aux2 = aux2 / 1e3;
		array[1] = '0' + (aux2 / 10);
		aux3 = n % 10000;
		aux3 = aux3 / 1e2;
		array[2] = '0' + (aux3 / 10);
		aux4 = n % 1000;
		aux4 = aux4 / 10;
		array[2] = '0' + (aux4 / 10);
		array[4] = '0' + (aux4 % 10);
		array[5] = '0' + (n % 10);
	}
}
