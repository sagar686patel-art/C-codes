#include<stdio.h>
int main()
{
	float p,r,t;
	printf("Enter principle amount=");
	scanf("%f",&p);
	printf("Enter interest rate=");
	scanf("%f",&r);
	printf("Enter time (in years)=");
	scanf("%f",&t);
	float si=(p*r*t)/100;
	printf("Simple interest is %f",si);
}