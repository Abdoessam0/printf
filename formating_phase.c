#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * format_fun - formats the string line
 * @format: The string line
 * @args: Arguments to be formated
 * Return: The length of the string line
 */
int format_fun(const char *format, va_list args)
{
	int i, k = 0, len = 0;
	con_t con[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent},
		{0, NULL}
	};
	if (format == NULL)
		return (-1);
	if (*format == 0)
		return (0);
	for (i = 0; format[i] != 0; i++, k = 0)
	{
		if (format[i] == '%')
		{
			while (con[k].c != 0)
			{
				if (format[i + 1] == con[k].c)
				{
					len += con[k].fun(args);
					break;
				}
				k++;
			}
			if (con[k].c == 0 && format[i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					write_fun(format[i]);
					write_fun(format[i + 1]);
					len += 2;
				} else
				{
					return (-1);
				}
			}
			i++;
		} else
		{
			write_fun(format[i]);
			len++;
		}
	}
	return (len);
}
