#include "factors.h"
/**
 * factorize - factorize the given number
 * @input: the given number as int
 * Return: 0 on success, 1 else
*/
int factorize(unsigned  long int number)
{
	/* int prime_num[] = {2, 3, 5, 7 ,11, 13, 17, 19, 23, 29, 31,
						37, 41, 43, 47, 53, 59, 61, 67, 71, 73,
						79, 83, 89, 97}; */
	int i = 2;

	while (1)
	{
		if ((number % i) == 0 )
		{
			printf("%lu=%lu*%d\n", number, number / i, i);
			return (0);
		}
		i++;
	}
	return (1);
}
