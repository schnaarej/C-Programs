bool Validity(int a, int b)
{
	if(a == 0 || b == 0)
		return false;
	return true;
}

void Derivate(int a, int b)
{
	int newCo;
	int newPow;
	newCo = a * b;
	newPow = b - 1;
	printf("f(x)' = %dx^%d \n", newCo, newPow);
}