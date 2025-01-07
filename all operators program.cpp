#include<stdio.h>
int main()
{
	int a,b,d,e,f,g,h;
	printf("enter the value of a" );
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	d=a+b;
	e=a-b;
	f=a/b;
	g=a%b;
	h=a*b;
	printf("add:%d\n,sub:%d\n,multi:%d\n,div:%d\n,rem:%d\n",d,e,h,f,g);
	return 0;
}
