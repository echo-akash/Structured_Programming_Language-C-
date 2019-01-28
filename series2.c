//Print the sum of the series: 1+1/3+1/5+...+1/N=? 

#include<stdio.h>
int main()
{
  double n,sum=0,i;
  printf("Please Give The Value of N: ");
  scanf("%lf",&n);
  for(i=1;i<=n;i=i+2)
  {
     sum = sum + (1/i);
  }
  printf("sum=%.2lf",sum);
  return 0;
}
