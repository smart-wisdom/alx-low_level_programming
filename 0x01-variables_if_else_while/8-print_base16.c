#include <stdio.h>
/**
 * main - print numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	char b = '0';
	char d = 'a';

	while
		(b <= '9')
		{
			putchar(b);
				b++;
		}
	while
		(d <= 'f')
		{
			putchar(d);
			d++;
		}
	putchar('\n');	
	return (0);
}
