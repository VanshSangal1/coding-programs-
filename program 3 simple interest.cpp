#include<stdio.h>
	int main()
	{
	float p ,r,t,si;
	printf(" enter the principle");
	scanf("%f",&p);
	printf("enter thr rate");
	scanf("%f",&r);
	printf("enter the time");
	scanf("%f",&t);
	si=p*r*t/100;
	printf("si=%f",si);
	return 0;
}
