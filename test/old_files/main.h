#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct opc - struct of data type opc.
 * @array: Arguments for analyze and formatted
 * @function_opc: Functions that print data edited
 * @function_opc_diff: Function that found different print argument
*/
typedef struct opc
{
	char *array;
	int (*function_opc)(va_list argv, char *s, int position);
	int (*function_opc_diff)(char *s, int position);
} input;

int _printf(const char *format, ...);
int _write(char *s);
int _strlen(char *s);
char *validation_and_return(va_list argv, char *s);
char *_strcat(char *dest, char *src);
char *assign_buffer(void);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
int _str(va_list argv, char *s, int pos);
int _char(va_list argv, char *str, int pos);
int _percent(char *s, int pos);
void _itoa(int n, char *s);
int _int(va_list argv, char *s, int pos);
void proc_number_4_digits(int, char *array);
void proc_number_3_digits(int, char *array);
void proc_number_2_digits(int, char *array);
void proc_number_6_digits(int, char *array);
void proc_negative_num(int n, char *number);
#endif
