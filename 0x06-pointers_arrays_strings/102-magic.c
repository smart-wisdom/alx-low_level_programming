#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * - Write your one line of code here...
	 * Remember
	 * - You are not allowed to use the variable a
	 * - You are not allowed to modify the variable p
	 * - You can only write one statement
	 * - You are not allowed to code anything else than the line of code at the expected line
	 */
	*(p + 5) = 98;
	/* - ...code should print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
