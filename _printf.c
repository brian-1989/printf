#include "holberton.h"

/**
 * _printf - Receive the parameters of the Main
 * @format: It contains the characters
 * Return: p_a which is the length of the characters
 */

int _printf(const char *format, ...)
{
	form_s spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{NULL, NULL},
	};
	int i, *p_a, p_b = 0;
	va_list a;

	va_start(a, format);
	p_a = &p_b;
	while (*format != '\0')
	{
		while  (*format != '%' && *format != '\0')
		{
			write(1, format, 1);
			p_b++;
			format++;
		}
		if (*format == '\0')
			break;
		format++;
		if (*format == '%')
		{
			write(1, format, 1);
			p_b++;
		}
		i = 0;
		while (spec[i].s != '\0')
		{
			if (*format == spec[i].s[0])
			{
				spec[i].p(a, p_a);
			}
			i++;
		}
		format++;
	}
	va_end(a);
	return (*p_a);
}
