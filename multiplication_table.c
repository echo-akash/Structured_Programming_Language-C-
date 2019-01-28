//Print a multiplication table of input number. 

#include<stdio.h>
int main()
{
  int i,x;
  printf("enter :");
  scanf("%d",&x);
  for(i=1;i<=10;i++)
  {
    printf("%d*%d=%d\n",x,i,x*i);
  }
  return 0;
}
