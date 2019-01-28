

#include<stdio.h>
int main()
{
  int a[100],p[100],ne[100],i,j,n,k,m,f1,f2;
  k=0;
  m=0;
  f1=0;
  f2=0;
  printf("enter the number of numbers:");
  scanf("%d",&n);
  printf("enter the values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>=0)
    {
      p[k]=a[i];
      k++;
      f1++;
    }
    else
    {
      ne[m]=a[i];
      m++;
      f2++;
    }
  }
  printf("number of positive numbers is %d",f1);
  printf("\npositive numbers are:");
  for(i=0;i<k;i++)
  {
    printf("%d ",p[i]);
  }
  printf("\nnumber of negative numbers is %d",f2);
  printf("\nnegative numbers:");
  for(i=0;i<m;i++)
  {
    printf("%d ",ne[i]);
  }
  return 0;
}
