#include "main.h"
/**
 * _printf - clone of orginal printf
 * @format: The formated string
 * Return: The length of the formated string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int s_len = 0;

	va_start(args, format);
	s_len = format_fun(format, args);
	va_end(args);
	return (s_len);
}
