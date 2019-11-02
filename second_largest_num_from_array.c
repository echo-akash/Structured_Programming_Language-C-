#include<stdio.h>
int main()
{
  int inputArray[500], elementCount, counter;
  int maxElement, secondMaxElement,INT_MIN;
  printf("Enter number of elements in array: ");
  scanf("%d", &elementCount);
  if(elementCount < 2)
  {
    printf("Number of elements should be more than or equal to two");
    return 0;
  }
  printf("Enter %d numbers \n", elementCount);
  for(counter = 0; counter < elementCount;counter++)
  {
    scanf("%d", &inputArray[counter]);
  }
  for(counter = 0; counter < elementCount; counter++)
  {
    if(inputArray[counter] > maxElement)
    {
      secondMaxElement = maxElement;
      maxElement = inputArray[counter];
    }
    else if (inputArray[counter] > secondMaxElement && inputArray[counter] != maxElement)
    {
      secondMaxElement =inputArray[counter];
    }
  }
  printf("Second Maximum element: %d",secondMaxElement);
  return 0;
}