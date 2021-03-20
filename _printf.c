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
		{"b", binary},
		{"o", octal},
		{"u", print_i},
		{"x", hexa_lower},
		{"X", hexa_upper},
		{"1", print_p},
		{NULL, NULL},
	};
	int l;
	va_list a;

	va_start(a, format);
	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	l = form_path(format, spec, a);
	va_end(a);

	return (l);
}
