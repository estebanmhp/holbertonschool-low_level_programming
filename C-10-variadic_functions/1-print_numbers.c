#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers to be passed as arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < n - 1)
			printf("%d%s", va_arg(num, int), separator);
		else
			printf("%d", va_arg(num, int));
	}

	printf("\n");
	va_end(num);
}
