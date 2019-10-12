#include <stdio.h>
int main()
{
  char a[100];
  int count,i,len,flag=0;
  count=0;
  printf("\nENTER A STRING: ");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  for (i=0;i<count;i++)
  {
    if(a[i]==a[count-i-1])
    flag=flag+1;
  }
  if(flag==count)
    printf("\nTHE STRING IS PALINDROME");
  else
    printf("\nTHE STRING IS NOT PALINDROME");
  return 0;
}
