#include <stdio.h>

int main()
{
	int age = 30;
	int *p = &age;
	printf("%d", *p);
	
	return 0;
}