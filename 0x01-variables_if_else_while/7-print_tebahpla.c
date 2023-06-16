#include <stdio.h>
/**
 * main - while - loop
 * Description 'print alphabets except q and e'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
