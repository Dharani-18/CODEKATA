#include <stdio.h>
#include<math.h>

int main()
{
    int n,remain,reverse=0;
    scanf("%d",&n); 
      while(n != 0)
    {
        remain = n%10;
        reverse = reverse*10 + remain;
        n /= 10;
    }
    if(n==reverse)
    {
    printf("no");
    }
    else
    printf("yes");
     return 0;
}
