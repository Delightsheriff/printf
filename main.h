#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int print_char(char c);
int _printf(const char *format, ...);

/**
 * struct printer - Struct format_types
 * @tester: The conversion specifier
 * @print: The function pointer
 *
 */

typedef struct printer
{
	char *tester;
	void (*print)(va_list arg);
} printer_t;

#endif /* MAIN_H */
