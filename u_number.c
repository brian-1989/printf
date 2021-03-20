#include "holberton.h"

/**
 * print_u - This function prints unsigned integers.
 * @intgr: The number to print.
 * @p_c: The pointer to acumulates the printed numbers.
 * Return: Nothing.
 */

void print_u(va_list intgr, int *p_c)
{
	unsigned int c, i;

	i = va_arg(intgr, int);
	c = print_number(i);
	*(p_c) = *p_c + c;
}
