#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
