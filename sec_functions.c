#include "holberton.h"

/**
 * print_number - This function prints a number.
 * @n: The number to print.
 * Return: The length of the number printed.
 */

int print_number(unsigned int n)
{
	int i = 0;

	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/**
 * print_i - This function prints a integer.
 * @intgr: The integer to print.
 * @p_c: The pointer to acumulate numbers printed.
 * Return: Nothing.
 */

void print_i(va_list intgr, int *p_c)
{
	int c;
	int i = va_arg(intgr, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
		*(p_c) = *p_c + 1;
	}
	c = print_number(i);
	*(p_c) = *p_c + c;
}

