#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct form - Struct form
 * @s: specifiers
 * @p: The function associated
 */
typedef struct form
{
	char *s;
	int (*p)();
} form_s;
int _printf(const char *format, ...);
void _putchar(char c);
void print_number(int n);
void print_c(va_list c);
void print_s(va_list s);
void print_i(va_list intgr);

#endif /* HOLBERTON */
