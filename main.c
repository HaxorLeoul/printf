#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
/* int len2; */
 /* unsigned int ui; */
 /* void *addr; */

	len = printf("%s", "This sentence is retrieved from va_args!\n");
	len = _printf("%c\n", 'S');
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len = _printf("Let'see if the cast is correctly done: %c.Did it work\n", 'F');
	len = _printf("Let's try to printf a simple sentence.\n");
	/* len2 = printf("Let's try to printf a simple sentence.\n"); */
	/* ui = (unsigned int)INT_MAX + 1024; */
	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Length:[%d, %i]\n", len, len); */
	/* printf("Length:[%d, %i]\n", len2, len2); */
	/* _printf("Negative:[%d]\n", -762534); */
	/* printf("Negative:[%d]\n", -762534); */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */
	/* _printf("Unsigned octal:[%o]\n", ui); */
	/* printf("Unsigned octal:[%o]\n", ui); */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	printf("%d", _printf("Character:[%c]\n", 35));
	printf("%d", printf("Character:[%c]\n", 35));
	/* printf("Character:[%c]\n", 'H'); */
	printf("%d", _printf("String:[%s]\n", "I am a string !"));
	/* printf("String:[%s]\n", "I am a string !"); */
	/* _printf("Address:[%p]\n", addr); */
	/* printf("Address:[%p]\n", addr); */
	len = _printf("Percent:[%%]\n");
	/* len2 = printf("Percent:[%%]\n"); */
	_printf("Len:[%d]\n", len);
	/* printf("Len:[%d]\n", len2); */
	/* _printf("Unknown:[%r]\n"); */
	/* printf("Unknown:[%r]\n"); */
	return (0);
}
