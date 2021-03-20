#include "holberton.h"

/**
 * binary - This function converts number to base two numbers.
 * @intgr: The number to convert.
 * @p_c: The pointer to acumulate the numbers printed.
 * Return: Nothing.
 */

void binary(va_list intgr, int *p_c)
{
	unsigned int i = 1023, num, *mem;
	char a;

	num = va_arg(intgr, int);
	mem = malloc(1024 * sizeof(int));
	if (mem == NULL)
		return;
	*(mem + i) = 1000;
	i--;
	while (num / 2 != 0)
	{
		mem[i] = num % 2;
		num /= 2;
		i--;
	}
	mem[i] = num;
	while (mem[i] != 1000)
	{
		a = mem[i] + '0';
		write(1, &a, 1);
		*(p_c) = *p_c + 1;
		i++;
	}
	free(mem);
}
