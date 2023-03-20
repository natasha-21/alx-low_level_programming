#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar ('\n');
	return(0);
}

