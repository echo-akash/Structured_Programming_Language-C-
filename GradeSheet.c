
#include<stdio.h>
int main()
{
  float n,a[100];
  int i;
  printf("enter the number of students:");
  scanf("%f",&n);
  printf("enter the marks of students:");
  for(i=0;i<n;i++)
  {
    scanf("%f",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>=90)
    {
      printf("\nstudent %d got A+",i+1);
    }
    else if(a[i]<90 && a[i]>=80)
    {
      printf("\nstudent %d got A",i+1);
    }
    else if(a[i]<80 && a[i]>=70)
    {
      printf("\nstudent %d got A-",i+1);
    }
    else if(a[i]<70 && a[i]>=60)
    {
      printf("\nstudent %d got B",i+1);
    }
    else if(a[i]<60 && a[i]>=50)
    {
      printf("\nstudent %d got C",i+1);
    }
    else if(a[i]<50 && a[i]>=40)
    {
      printf("\nstudent %d got D",i+1);
    }
    else
      printf("\nstudent %d got F",i+1);
  }
  return 0;
}
