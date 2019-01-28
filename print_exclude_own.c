//Print a series of numbers excluding the mentioned number. 

#include<stdio.h>
int main()
{
  int n,i,x;
  printf("enter number range:");
  scanf("%d",&n);printf("number to be excluded:");
  scanf("%d",&x);
  printf("numbers after exclusion:");
  for(i=1;i<=n;i++)
  {
    if(i!=x)
    printf("%d ",i);
  }
  return 0;
}
