#include <stdio.h>
/**
 * main - for loop
 * Description 'print alphabets except q and e'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
