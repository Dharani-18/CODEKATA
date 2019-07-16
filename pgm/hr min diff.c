#include <stdio.h>
#include<math.h>
int main()
{
  int h,m,h2,m2,h1,m1;
  scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
  h=abs(h1-h2);
  m=abs(m1-m2);
  printf("%d %d",h,m);
    return 0;
}
