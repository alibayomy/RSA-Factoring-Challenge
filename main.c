#include "factors.h"
/**
 * main - the main program to run the files
 * @argc: number of arguments passed to the program
 * @argv: array of strings of the arguments passed to the program
 * Return: 0 on success, else 1
*/
int main(int argc, char **argv)
{
	FILE *fp;
	char input[1024];
	int status;

	(void) argc;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Couldn't open the file\n");
		exit (EXIT_FAILURE);
	}
	while (fgets(input, 1024, fp) != NULL)
	{
		status = factorize(atoi(input));
		if (status == 1)
			printf("Couldn't fined the number");
	}
	fclose(fp);
	return (0);
}

