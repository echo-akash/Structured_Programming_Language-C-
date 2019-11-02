#include <stdio.h>
int main()
{
  int inputArray[500], outputArray[500], elementCount, counter;
  printf("Enter number of elements in array: ");
  scanf("%d", &elementCount);
  printf("Enter %d numbers \n", elementCount);
  for(counter = 0; counter < elementCount; counter++)
  {
    scanf("%d", &inputArray[counter]);
  }
  for(counter = 0; counter < elementCount; counter++)
  {
    outputArray[counter] =inputArray[elementCount-counter-1];
  }
  printf("Reversed Array\n");
  for(counter = 0; counter < elementCount; counter++)
  {
    printf("%d ", outputArray[counter]);
  }
  return 0;
}