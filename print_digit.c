#include "main.h"
#include <stdlib.h>
/**
 * print_decimal - converts a decimal number to a string
 * @n: An integer
 * Return: A pointer to a string
 */
int print_decimal(int n)
{
	int is_negative = 0, len = 0, i = 0;
	char *s;

	if (n == 0)
	{
		write_fun(48);
		return (1);
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
		len = 1;
	}
	len += int_len(n);
	s = malloc(sizeof(char) * len + 1);
	while (n != 0)
	{
		s[i] = (n % 10) + 48;
		n /= 10, i++;
	}
	if (is_negative)
	{
		write_fun('-');
	}
	while (i >= 0)
	{
		write_fun(s[i]);
		i--;
	}
	return (len);
}
