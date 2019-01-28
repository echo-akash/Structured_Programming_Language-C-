//Input the base and height of parallelogram and print the area of it. 

#include <stdio.h>
#include <math.h>
void main()
{
  float h,b,area;
  printf("Enter the values base and height:");
  scanf("%f %f",&b,&h);
  area = (b*h);
  printf("Area of a parallelogram = %f", area);
  return 0;
}
