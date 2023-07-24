/**
 * int_len - counts the number of digits
 * @i: An integer
 * Return: The number of digits
 */
int int_len(int i)
{
	int len = 0;

	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}
