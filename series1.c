//Print the sum of the series: 1*2 + 2*3 + ....... + N*(N+1) = ?

#include<stdio.h>
int main()
{
  int i,n,s;
  s=0;
  printf("enter the range:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("(%d*%d)",i,i+1);
    if(i==n)
      printf("=");
    else
      printf("+");
    s=s+(i*(i+1));
  }
  printf("%d",s);
  return 0;
}
