#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings passed as args, follwed by newline
 * @separator: string to be pritned in between arg strings
 * @n: number of arg strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list word;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(word, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(word);
}
