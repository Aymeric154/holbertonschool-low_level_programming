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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	if (n > 5) {
		printf("Last digit of number %d is %d and is greater than 5\n", n);
		}	 
	if(n < 6){
		printf("Last digit of number %d is %d and is less than 6 and not 0"};
	else {
		printf("Last digit of number %d is %d and is 0")
				};
	
	return (0);
}
