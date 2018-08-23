#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{  
 int i,n,j,x=0;  
 char a[50],ch,m[50]; 
    printf("Enter message to encrypt\n");
    gets(a);
	printf("enter key:\n");
    scanf("%d",&n);
   // strcpy(m,a);
    for(i=0;a[i]!='\0';i++)
    {
        ch=a[i];
       
		 if(a[i]==' ')
		 continue;	
 
		
        if(ch>=97 && ch<=122)
        {
            ch=ch+n;
            if(ch>'z')
            {
                ch=ch-26;
            }
            a[i]=ch;
        } 
       else if(ch>='A' && ch<='Z')
        {
            ch=ch+n;
            if(ch>'Z')
            {
                ch=ch+'A'-'Z'-1;
             }   a[i]=ch;
            
        
    }
    
    }
    printf("ENCRYPTED MESSAGE is:\t %s\n",a);
    printf("______CRYPTANALYSIS_____\n%s\n",a);
    int k=1;
    for(j=0;j<24;j++)
    {
        for(i=0;a[i]!='\0';i++)
        {
            ch=a[i];
        	if(ch==' ')
 			 continue;
            if(ch>=97 && ch<=122)
           {
            ch=ch-k;
            if(ch<'a')
             {
                ch=ch+26;
             }
            a[i]=ch;
          } 
         else if(ch>='A' && ch<='Z')
             {
               ch=ch-k;
              if(ch<'A')
               {
                 ch=ch-'A'+'Z'+1;
               }  
               a[i]=ch;
             }
             
        }
        printf("%s\n",a);
        
    }
}

