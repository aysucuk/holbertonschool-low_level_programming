#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - check the code
 * _putchar - writes the character c to stdout
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char aysucuk;

	for (aysucuk = 48; aysucuk <= 57; aysucuk++)
	{
	if (aysucuk != 50 && aysucuk != 52)
	{
		_putchar(aysucuk);
	}
	}
	_putchar('\n');
}
