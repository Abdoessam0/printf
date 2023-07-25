#include "main.h"
#include <stdlib.h>
/**
 * print_decimal - prints decimal
 * @n: An integer
 * Return: The number of printed characters
 */
int print_decimal(int n)
{
	int count, len;
	unsigned int num;

	count = 1, len = 0;
	if (n < 0)
	{
		write_fun('-');
		num = n * -1;
		len = 1;
	} else
	{
		num = n;
	}
	len += int_len(num);
	while (num / count > 9)
	{
		count *= 10;
	}
	while (count != 0)
	{
		write_fun('0' + num / count);
		num %= count;
		count /= 10;
	}

	return (len);
}
/**
 * print_binary - prints binary form decimal number
 * @n: decimal
 * Return: The number of printed characters
 */
int print_binary(unsigned int n)
{
	unsigned int d = 1;
	int len = 0, n_bin = 31, i = 0, f_bin = 0;

	while (n_bin >= 0)
	{
		if (n == 0)
		{
			write_fun(48);
			return (1);
		}
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
