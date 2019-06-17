#include<stdio.h>
int main()
{
int n,f,count=0;
scanf("%d",&n);
f=1;
while(n>0)
{
    n=n/10;
    count=count+1;
 
}

printf("%d",count);
return 0;
}
