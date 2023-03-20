#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld = n % 10;


	if (ld==0)
        {
                printf("The last digit of %d is and is 0\n", n);
        }
	else{
		if (ld > 5)
        	{
                	printf("The last digit of %d is and is greater than 5\n", n);
        	}

		else if(ld < 6)
        	{
                	printf("The last digit of %d is and is less than 6\n", n);
        	}
	}


	return (0);
}

