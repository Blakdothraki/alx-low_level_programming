#include <stdio.h>
/* header library for standard IO */
/* main - the main function is the beginning of all C codes */

int main(void)
{       
        char alpha;

	for (alpha = 'a'; alpha <= 'z';  alpha++)
        {
		putchar(alpha);
        }
	return (0);
}
