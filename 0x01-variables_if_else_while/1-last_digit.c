#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the interval of the last digit of n
* Return: always returns 0
*/
int main(void)
{
	int n;
        int a;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a=n%10;
	if (n > 5)
	{
         printf("Last digit of %d is %d and is greater than 5", n, a);
	}
	 if (n < 6 && n != 0)
        {
         printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
        }
	 if (n == 0)
        {
         printf("Last digit of %d is %d and is 0", n, a);
        }
	return (0);
}
