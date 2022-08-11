#include <stdio.h>

/**
 * myfunfact - prints something before the
 * main is executed
 *
 */
void myfunfact(void) __attribute__((constructor));

void myfunfact(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
