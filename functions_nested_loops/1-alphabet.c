#include <studio.h>
#include "main"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar (c);
	}
	putchar('/n');
}
