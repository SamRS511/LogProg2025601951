#include <stdio.h>
int main()
{
	float res;
	int x=3;
	float A= (1/(float)2)*x;
	float B= (3+x)/2.0;
	float C= 2.0*(x*x);
	float D= (2.0+3.0)*x;
	res=(A+B*C)/D;
	printf("res%f", res);
	return 0;
}
