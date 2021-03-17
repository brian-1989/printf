#include "holberton.h"

/**
 * print_number - This function prints a number.
 * @n: The number to print.
 * Return: The length of the number printed.
 */

int print_number(int n)
{
	int c = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n > 10)
	{
		c = 1 + print_number(n / 10);
	}
	_putchar((n % 10) + '0');
	return (c);
}

/**
 * print_c - This function prints a character.
 * @c: The character to print.
 * @p_c: The pointer to acumulate characters printed.
 * Return: Nothing.
 */

void print_c(va_list c, int *p_c)
{
	char *i;

	i = va_arg(c, char *);
	write(1, &i, 1);
	*(p_c) = *p_c + 1;
}

/**
 * print_s - This function prints a string.
 * @s: The string to print.
 * @p_c: The pointer to acumulate characters printed.
 * Return: Nothing.
 */

void print_s(va_list s, int *p_c)
{
	int i;
	char *m = va_arg(s, char*);

	if (m == NULL)
		m = "(null)";
	for (i = 0; m[i] != '\0'; i++)
	{
		write(1, m + i, 1);
		*(p_c) = *p_c + 1;
	}
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

	c = print_number(i) + 1;
	*(p_c) = *p_c + c;
}

/**
 * print_p - This function prints a percent sign.
 * Return: Nothing.
 */

void print_p(void)
{
	_putchar('%');
}
