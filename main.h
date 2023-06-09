#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/**
 * struct printer - a structure representing a conversion specifier
 * @tester: the conversion specifier
 * @pr: function pointer to the print function the conversion specifier
 */

typedef struct printer
{
	char *tester;
	int (*pr)(va_list args);
} printer_t;

int print(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_formatted(const char *format, va_list args);
int print_specifier(char format, va_list args);
int print_invalid_specifier(char prev_specifier, char format, int count);
int print_integer(va_list args);
void print_integer_recursive(int num);
int print_binary(va_list args);
void print_binary_recursive(int num);
int is_valid_char(char variations);

#endif /* MAIN_H */
