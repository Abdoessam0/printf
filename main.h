#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct convention_char - convention characters indicator
 * @c: The convention char
 * @fun: The function of the char
 */
typedef struct convention_char
{
	char c;
	int (*fun)(va_list);
} conven_t;

int _printf(const char *format, ...);
int format_fun(const char *format, va_list args, conven_t con[]);
int int_len(int i);
int print_decimal(int n);
int print_binary(va_list arg);
int write_fun(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_percent(va_list arg);

#endif
