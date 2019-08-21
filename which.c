#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <limits.h>

/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;
	char path[PATH_MAX];

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}

	if (getcwd(path, sizeof(path)) == NULL)
	{
		printf("Can't get the path");
		return (1);
	}
	i = 1;
	while (av[i])
	{
		if (stat(av[i], &st) == 0)
		{
			printf("Found the file %s\n", av[i]);
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
