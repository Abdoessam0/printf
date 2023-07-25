#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints a single character
 * @arg: A character
 * Return: 1
 */
int print_char(va_list arg)
{
	write_fun(va_arg(arg, int));
	return (1);
}
/**
 * print_str - prints a string
 * @arg: A string
 * Return: The length of the string
 */
int print_str(va_list arg)
{
	int s_len = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	while (s[s_len] != 0)
	{
		write_fun(s[s_len]);
		s_len++;
	}
	return (s_len);
}
/**
 * print_int - prints an integer
 * @arg: An integer
 * Return: The number of digits in the integer
 */
int print_int(va_list arg)
{
	int i_len;

	i_len = print_decimal(va_arg(arg, int));
	return (i_len);
}
/**
 * print_percent - prints the percentage character
 * @arg: Not used (ignored by the compiler)
 * Return: 1
 */
int print_percent(__attribute__((unused)) va_list arg)
{
	write_fun('%');
	return (1);
}
