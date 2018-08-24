#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a,b,i,t,q=0,r;
	int t1=0,t2=1;
	printf("Enter the values of a,b for a^(-1) mod b:\n");
	scanf("%d %d",&a,&b);
	if(b>a)
	{
	while(b!=1 && a!=0)
	{
		q=b/a;
		printf("%d\n",q);
		r=b%a;
		t=t1-(q*t2);
		b=a;
		a=r;
		t1=t2;
		t2=t;
	}
}
	printf("your inverse mod is:\t%d",t1);
	
}
