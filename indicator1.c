#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("\nEnter the value of b=");
	scanf("%d",&b);
	int *p1,*p2;
	p1=&a;
	p2=&b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("\na=%d",*p1);
	printf("\nb=%d",*p2);
}

