#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - program will assign a random number to the variable n each time it is executed
 *
 *  Return: 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	if ((n % 10) > 5) {
		printf("Last digit of number %d is %d and is greater than 5\n",n ,m);
		}	 
	if((n % 10) < 6){
		printf("Last digit of number %d is %d and is less than 6 and not 0",n ,m};
	if (n = 0) {
		printf("Last digit of number is 0")
				};
	
	return (0);
}
