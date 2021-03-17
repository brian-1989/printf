#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct form - Struct form
 * @s: specifiers
 * @p: The function associated
 */

typedef struct form
{
	char *s;
	void (*p)();
} form_s;

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
void print_c(va_list c, int *p_c);
void print_s(va_list s, int *p_c);
void print_i(va_list intgr, int *p_c);
void print_p(void);
int form_path(const char *format, form_s *, va_list a);

#endif /* HOLBERTON */
