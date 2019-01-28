//Print the value of X^N.
#include<stdio.h>
int main()
{
  int p,n,i,x;
  p=1;
  printf("enter value of X:");
  scanf("%d",&x);
  printf("enter value of N:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    p=p*x;
  }
  printf("value of %d^%d=%d",x,n,p);
  return 0;
}
