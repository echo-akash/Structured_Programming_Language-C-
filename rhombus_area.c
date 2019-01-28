//Input the diagonals of rhombus and print the area. 

#include <stdio.h>
#include <math.h>
void main()
{  
  float h,b,area;
  printf("Enter the values of two diagonals:");
  scanf("%f %f",&b,&h);
  area = (b*h)/2;
  printf("Area of a rhombus = %f", area);
  return 0;
}
