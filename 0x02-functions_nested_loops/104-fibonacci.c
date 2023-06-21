#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long f_1 = 0, f_2 = 2, val;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
	unsigned long h_1, h_2;

	for (count = 0; count < 92; count++)
	{
	val = f_1 + f_2;
	printf("%lu, ", val);
	f_1 = f_2;
	f_2 = val;
	}
	f1_h1 = f_1 / 10000000000;
	f2_h1 = f_2 / 10000000000;
	f1_h2 = f_1 % 10000000000;
	f2_h2 = f_2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	h_1 = f1_h1 + f2_h1;
	h_2 = f1_h2 + f2_h2;
	if (f1_h2 + f2_h2 > 9999999999)
	{
	h_1 += 1;
	h_2 %= 10000000000;
	}
	printf("%lu%lu", h_1, h_2);
	if (count != 98)
	printf(", ");
	f1_h1 = f2_h1;
	f1_h2 = f2_h2;
	f2_h1 = h_1;
	f2_h2 = h_2;
	}
	printf("\n");
	return (0);
}
