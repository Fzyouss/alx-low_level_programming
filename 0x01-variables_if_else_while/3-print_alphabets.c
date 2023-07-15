#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);
	putchar('\n');
	return (0);
}
