#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - split string
 *
 * Return: Always 0.
 */
char *split(char *str);

int main(void)
{
	char *tok;
	char string[80] = "This is a test";

	tok = split(string);
	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, " ");
	}

	return (0);
}

char *split(char *str)
{
	char *token;

	token = strtok(str, " ");

	return (token);
}
