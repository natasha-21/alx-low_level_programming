#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int is_upper(int c)
{
	if((c>='A') && (c<='Z'))
	{
		return 1;
	}
	else if((c>='a') && (c<='z'))
	{
		return 0;
	}
}
