#include <stdio.h>
#include <unistd.h>

/**
 * main - read the arguments
 *
 * @argc: counter args
 * @argv: arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	size_t n;
	int i = 0;

	while (argv[i] != NULL)
	{
		i++;
	}

	n = sizeof(argv) / sizeof(argv[0]);

	printf("%lu\n", n);
	printf("%i\n", argc);
	printf("%i\n", i);

	return (0);
}
