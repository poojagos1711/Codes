#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char s[50],c[50],z[50];
	int a,b,i;
	printf("enter the plain text\n");
	gets(s);
	printf("enter the value of a,b");
	scanf("%d %d",&a,&b);
    while(gcd(a,26)!=1)
	{
		printf("a is not coprime to 26, please enter the value again");
		scanf("%d",&a);
	}

	b=b%26;
	for(i=0;s[i]!='\0';i++)
	{
	c[i]=((a*(s[i]-65))+b)%26;
	}
	int q=0;
	q=strlen(s);
	strcpy(c,z);
	printf("Encrypted Affine Cipher is:\n");
	for(i=0;i<strlen(c);i++)
	{
		c[i]=c[i]+65;
	}
	for(i=0;i<q-1;i++)
	{
		printf("%c",c[i]);
	}
	int x=0;
	printf("Decrypted Plain Text:\n");
	x=inv(a,26);
	for(i=0;z[i]!='\0';i++)
	{
		z[i]=(x*(z[i]-b))%26;
	}
	for(i=0;i<q-1;i++)
	{
		printf("%c",z[i]);
	}	
}
int inv(int a, int m)
{
	int x;
    a = a%m;
    for(x=1;x<m;x++)
       if ((a*x) % m == 1)
          return x;
}
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
