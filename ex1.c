#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, num_childs = 3;

	i = 0;
	while (i < num_childs)
	{
		if (fork() != 0)
		{
			i++;
			printf("[son] pid %u from [parent] pid %u\n", getpid(), getppid());
		}
	}

	return (0);
}
