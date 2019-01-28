//Print the unit and tenth place value of a number.
#include<stdio.h>
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  printf("unit place:%d",n%10);
  printf("\nten's place:%d",(n/10)%10);
  return 0;
}
