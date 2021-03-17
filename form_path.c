#include "holberton.h"
/**
 * form_path - this function travers the format and call function pointers.
 * @format: it contain the parameters.
 * @spec: it contain the Specifiers.
 * @a: variable that houses the arguments of variadic function.
 * Return: the length of the characters printed.
 */
int form_path(const char *format, form_s spec[], va_list a)
{
	int i, *p_a, p_b = 0;

	p_a = &p_b;
	while (*format != '\0')
	{
		while (*format != '%' && *format != '\0')
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
				break;
			}
			if (spec[i].s[0] == '1')
				if (*format != '%')
				{
					spec[i].p();
					write(1, format, 1);
					p_b = p_b + 2;
				}
			i++;
		}
		format++;
	}
	return (*p_a);
}
