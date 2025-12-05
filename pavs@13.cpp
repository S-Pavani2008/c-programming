#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	float si,ci;
	printf("enter p t r values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	ci=p*pow(1+r/100,t)-p;
	printf("Simple interest is %f\n",si);
	printf("Compound Interest is %f",ci);
return 0;
}
