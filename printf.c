#include "main.h"
#include <stddef.h>
/**
 * _printf - clone of orginal printf
 * @format: The formated string
 * Return: The length of the formated string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int s_len = 0;
	conven_t con[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent},
		{'b', print_binary},
		{0, NULL}
	};

	va_start(args, format);
	s_len = format_fun(format, args, con);
	va_end(args);
	return (s_len);
}
