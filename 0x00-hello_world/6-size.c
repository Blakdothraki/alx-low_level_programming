#include <stdio.h>

int main(void)
	/* main function called
	 * data types identified
	 */
{
	char g;
	int a;
	long int b;
	long long int c;
	float f;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof (g));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof (a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof (b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof (c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof (f));
	return (0);
}
