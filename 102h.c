#include<stdio.h>
int main()
{
	int a,b,c,d,a1,a2;
	scanf("%d",&a);
	b=a%10;
	a1=b*b;
	printf("\n%d",b);
	printf("\n%d",a1);
	c=a/10;
	a2=c*c;
	printf("\n%d",c);
	printf("\n%d",a2);
	d=a1+a2;
	printf("\n%d",d);
	return 0;
}
