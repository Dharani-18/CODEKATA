#include<stdio.h>
int main()
{
int n,k,sum=0;
scanf("%d%d",&n,&k);
for(int i=1;i<=k;i++)
{
    sum=sum+i;
}
printf("%d",sum);
return 0;
}
