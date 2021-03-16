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
	int l;
	va_list a;

	va_start(a, format);
	if (format == NULL)
		return (0);
	l = form_path(format, spec, a);
	va_end(a);

	return (l);
}
