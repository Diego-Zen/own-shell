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
	pid_t ppid, mypid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;

	ppid = getppid();
	mypid = fork();
	if (mypid != 0)
	{
		if (fork() != 0)
		{
			if (fork() != 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("Error:");
					exit(0);
				}
			}
		}
	}

	printf("Child exit code %d\n", WEXITSTATUS(status));
	printf("Process id: %u\n", getppid());
	printf("child process: %u, Parent process: %u\n", getpid(), ppid);

	return (0);
}
