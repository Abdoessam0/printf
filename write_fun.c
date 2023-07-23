#include <unistd.h>
/**
 * write_fun - prints a charactor on the screen
 * @c: The character to be printed
 * Return: 0 when success
 */
int write_fun(char c)
{
	write(1, &c, 1);
	return (0);
}
