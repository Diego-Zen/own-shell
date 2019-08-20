#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;
	size_t bufsize = 1024;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
		return (-1);

	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);

	free(buffer);
	return (0);
}
