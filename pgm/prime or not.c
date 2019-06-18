#include <stdio.h>
#include<math.h>

int main()
{
    int i, n,remain,reverse=0,count=0;
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count<=2)
    {
        printf("yes");
    }
    else
    printf("no");
     return 0;
}
