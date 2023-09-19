#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - this is to determine if a number is negative, posotive or zero.
 *
 * Return: always 0(success)
 */
=======
  * main - this is the main function
  * Return: always 0
  */

/* more headers goes there */

/* betty style doc for function main goes there */
>>>>>>> refs/remotes/origin/master
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
<<<<<<< HEAD
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
=======
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	return (0);
}
>>>>>>> refs/remotes/origin/master
