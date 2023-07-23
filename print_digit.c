#include "main.h"
/**
 * print_decimal - converts a decimal number to a string
 * @n: An integer
 * Return: A pointer to a string
 */
int print_decimal(int n)
{
	int is_negative = 0, rev = 0, rem, len;

	if (n == 0)
	{
		write_fun(48);
		return (1);
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	len = int_len(n);
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	if (is_negative)
	{
		write_fun('-');
	}
	while (rev != 0)
	{
		rem = rev % 10;
		write_fun(rem + 48);
		rev /= 10;
	}
	return (len);
}
