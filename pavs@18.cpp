#include<stdio.h>
int main()
{
	int r;
	float ac,acc;
	printf("enter r value");
	scanf("%d",&r);
	ac=3.1415*r*r;
	acc=2*3.1415*r;
	printf("Area of circle is:%f\n",ac);
	printf("Area of circumference is:%f",acc);
}

