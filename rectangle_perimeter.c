//Input the height and base pf rectangle and print the perimeter.

#include <stdio.h>
#include <math.h>
int main()
{
  float h,b,p;
  printf("Enter the values of two sides:");
  scanf("%f %f",&b,&h);
  p = (b+h)*2;
  printf("perimeter of a rectangle = %f", p);
  return 0;
}
