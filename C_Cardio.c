#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int LENGTH = 20;
	char name[LENGTH];
	int age;
	
	printf("Enter your name: ");
	fgets(name, LENGTH, stdin);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Your name is: %s\n", name);
	printf("Your age is: %d\n", age);
	printf("Goodbye \n");
	
	return 0;
}

