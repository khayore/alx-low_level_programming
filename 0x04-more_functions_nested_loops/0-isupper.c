#include "main.h"

/**
 * 0-isupper.c - checks is a charater is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
