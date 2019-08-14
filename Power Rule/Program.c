#include <stdio.h>
#include <stdbool.h>
#include "Derivate.h"

static void Prompt(void);

int main(void)
{
	//variables 
	int xCo;
	int xPow;
	bool notZero;
	Prompt();
	
	printf("Coefficient of x: ");
	scanf("%d", &xCo);
	printf("Power of x: ");
	scanf("%d", &xPow);
	notZero = Validity(xCo, xPow);
	if(notZero)
	{
		printf("f(x) = %dx^%d \n",xCo ,xPow);
		Derivate(xCo, xPow);
		printf("Congrats!!");
	}
	else
	{
		printf("You didn't enter non-zero integers");
		printf(" for the coefficient or power of x!");
	}
	
	
	return 0;
}
 
void Prompt()
{
	printf("Derivates tell us how quickly a thing is changing.\n");
	printf("Please enter x where x is a number to a non-zero coefficient and power\n");
	printf("to compute the derrivate using the power rule.\n");
	printf("Please first enter the coefficient and then the power of x.\n");
}



