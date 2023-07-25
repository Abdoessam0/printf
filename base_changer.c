#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_binary - prints binary form decimal number
 * @arg: decimal
 * Return: The number of printed characters
 */
int print_binary(va_list arg)
{
	unsigned int d = 1, n;
	int len = 0, n_bin = 31, i = 0, f_bin = 0;

	n = va_arg(arg, int);
	if (n == 0)
	{
		write_fun(48);
		return (1);
	}
	while (n_bin >= 0)
	{
		while (i < n_bin)
		{
			d *= 2;
			i++;
		}
		if (n >= d)
			f_bin = 1;
		if (n < d && f_bin)
			f_bin = 2;
		if (f_bin == 1)
		{
			n -= d;
			write_fun(49);
			len++;
		} else if (f_bin == 2)
		{
			write_fun(48);
			len++;
		}
		n_bin--, d = 1, i = 0;
	}
	return (len);
}
