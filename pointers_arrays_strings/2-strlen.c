#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}
