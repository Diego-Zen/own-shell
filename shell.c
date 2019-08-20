#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 *
 * @argc: count of arguments
 * @argv: vector arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	size_t bufsize = 1024;
	pid_t my_pid;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
		return (-1);

	printf("#cisfun$ ");
	getline(&buffer, &bufsize, stdin);
	my_pid = fork();
	if (my_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error!");
	}
	free(buffer);
	return (0);
}
