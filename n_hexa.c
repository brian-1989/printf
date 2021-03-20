#include "holberton.h"

/**
 * hexa_lower - This function converts numbers base 10 to base 16.
 * @intgr: The number to convert.
 * @p_c: The pointer to acumulate the printed numbers.
 * Return: Nothing.
 */

void hexa_lower(va_list intgr, int *p_c)
{
	unsigned int i = 1023, num, *mem;
	char a;

	num = va_arg(intgr, int);
	mem = malloc(1024 * sizeof(int));
	if (mem == NULL)
		return;
	*(mem + i) = 1000;
	i--;
	while (num / 16 != 0)
	{
		if (num % 16 > 9)
			mem[i] = assign_lower(num % 16);
		else
			mem[i] = num % 16;
		num /= 16;
		i--;
	}
	if (num % 16 > 9)
		mem[i] = assign_lower(num % 16);
	else
		mem[i] = num;
	while (mem[i] != 1000)
	{
		if (mem[i] > 9)
			a = mem[i];
		else
			a = mem[i] + '0';
		write(1, &a, 1);
		*(p_c) = *p_c + 1;
		i++;
	}
	free(mem);
}

/**
 * assign_lower - This function assigns respective letter
 * to hexadecimal number.
 * @n: The number to check.
 * Return: The letter assigned.
 */

int assign_lower(int n)
{
	switch (n)
	{
	case 10:
		n = 'a';
		break;
	case 11:
		n = 'b';
		break;
	case 12:
		n = 'c';
		break;
	case 13:
		n = 'd';
		break;
	case 14:
		n = 'e';
		break;
	case 15:
		n = 'f';
		break;
	default:
		break;
	}
	return (n);
}

/**
 * hexa_upper - This function converts numbers base 10 to base 16.
 * @intgr: The number to convert.
 * @p_c: The pointer to acumulate the printed numbers.
 * Return: Nothing.
 */

void hexa_upper(va_list intgr, int *p_c)
{
	unsigned int i = 1023, num, *mem;
	char a;

	num = va_arg(intgr, int);
	mem = malloc(1024 * sizeof(int));
	if (mem == NULL)
		return;
	*(mem + i) = 1000;
	i--;
	while (num / 16 != 0)
	{
		if (num % 16 > 9)
			mem[i] = assign_upper(num % 16);
		else
			mem[i] = num % 16;
		num /= 16;
		i--;
	}
	if (num % 16 > 9)
		mem[i] = assign_upper(num % 16);
	else
		mem[i] = num;
	while (mem[i] != 1000)
	{
		if (mem[i] > 9)
			a = mem[i];
		else
			a = mem[i] + '0';
		write(1, &a, 1);
		*(p_c) = *p_c + 1;
		i++;
	}
	free(mem);
}

/**
 * assign_upper - This function assigns respective letter
 * to hexadecimal number.
 * @n: The number to check.
 * Return: The letter assigned.
 */

int assign_upper(int n)
{
	switch (n)
	{
	case 10:
		n = 'A';
		break;
	case 11:
		n = 'B';
		break;
	case 12:
		n = 'C';
		break;
	case 13:
		n = 'D';
		break;
	case 14:
		n = 'E';
		break;
	case 15:
		n = 'F';
		break;
	default:
		break;
	}
	return (n);
}
