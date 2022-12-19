#include "shell.h"

/**
 * main - Function use putchar to list alphabets
 * Description: list alphabets to lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
