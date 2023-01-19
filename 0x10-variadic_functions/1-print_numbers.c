#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numberrs - prints numbers followed by a new line.
 * @seperator: string to be printed between numbers.
 * @n: numbers of integers passed to the function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(numbers);
}


