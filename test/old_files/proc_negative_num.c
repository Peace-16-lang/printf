#include "main.h"
/**
 * proc_negative_num - Funtion that process a number negative
 * @n: number negative
 * @number: array for save number
 */
void proc_negative_num(int n, char *number)
{
	n = -(n);
	if (n > 0 && n < 10)
	{
		number[0] = '-';
		number[1] = '0' + n;
	}
	else if (n > 9 && n < 100)
	{
		number[0] = '-';
		proc_number_2_digits(n, number);
	}
	else if (n > 99 && n < 1e3)
	{
		number[0] = '-';
		proc_number_3_digits(n, number);
	}
	else if (n > 999 && n < 1e4)
	{
		number[0] = '-';
		proc_number_4_digits(n, number);
	}
	else if (n > 99999 && n < 1e6)
	{
		number[0] = '-';
		proc_number_6_digits(n, number);
	}
}
