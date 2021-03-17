#include "holberton.h"

/**
 * print_p - This function prints a percent sign.
 * Return: Nothing.
 */

void print_p(void)
{
	write(1, "%", 1);
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
