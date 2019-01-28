//Input the base and height of triangle and print the area of the triangle. 

#include <stdio.h>
#include <math.h>
int main()
{
  float h,b,area;
  printf("Enter the values base and height:");
  scanf("%f %f",&b,&h);
  area = (b*h) / 2;
  printf("Area of a triangle = %f", area);
  return 0;
}
