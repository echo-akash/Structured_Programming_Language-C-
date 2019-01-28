//Input the base and height of rectangle and print the area.

#include <stdio.h>
#include <math.h>
void main()
{
  float h,b,area;
  printf("Enter the values base and height:");
  scanf("%f %f",&b,&h);
  area = (b*h);
  printf("Area of a rectangle = %f", area);
  return 0;
}
