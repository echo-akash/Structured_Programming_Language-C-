//Input three angles of triangle and check whether it's valid triangle or not.

#include<stdio.h>
int main()
{
  float x,y,z;
  printf("enter the three angles:");
  scanf("%f%f%f",&x,&y,&z);
  if(x+y+z<=180)
    printf("triangle is valid");
  else
    printf("triangle is not valid");
  return 0;
}
