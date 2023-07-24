#include "main.h"
#include <stdlib.h>
/**
 * print_decimal - converts a decimal number to a string
 * @n: An integer
 * Return: A pointer to a string
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
