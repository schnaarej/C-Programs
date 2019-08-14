#include <stdio.h>

int main()
{
	//variables
	char adjective[25];
	char place[25];
	char color[15];
	char noun[20];
		
	//input
	printf("Please enter an adjective: ");
	scanf("%s", adjective);
	printf("Please enter an place: ");
	scanf("%s", place);
	printf("Please enter an color: ");
	scanf("%s", color);
	printf("Please enter an noun: ");
	scanf("%s", noun);
	printf("\n \n");
	
	//output
	printf("-------------------------Mad Lib-------------------------\n");
	printf("It's been a %s winter here in %s. \n",adjective ,place);
	printf("For as long as we can remember, the sky has been %s.\n", color);
	printf("and the ground has been covered with %s.\n", noun);
	return 0;
}