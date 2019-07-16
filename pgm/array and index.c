#include <stdio.h>

int main()
{
  int n,a[290],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      printf("%d %d\n",a[i],i);
  }

    return 0;
}
