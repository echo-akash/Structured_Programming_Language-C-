#include <stdio.h>
int main()
{
  int inputArray[500], elementCount, counter;
  int readIndex, writeIndex, scanIndex;
  printf("Enter number of elements in array: ");
  scanf("%d", &elementCount);
  printf("Enter %d numbers \n", elementCount);
  for(counter = 0; counter < elementCount; counter++)
  {
    scanf("%d", &inputArray[counter]);
  }
  for(readIndex=0, writeIndex=0; readIndex < elementCount; readIndex++)
  {
    for(scanIndex=readIndex+1; scanIndex < elementCount; scanIndex++)
    {
      if(inputArray[scanIndex] == inputArray[readIndex])
      {
        break;
      }
    }
      if(scanIndex == elementCount)
      {
        inputArray[writeIndex] =inputArray[readIndex];
        writeIndex++;
      }
  }
  printf("Unique Elements\n");
  for(counter = 0; counter < writeIndex;counter++)
  {
    printf("%d ", inputArray[counter]);
  }
  return 0;
}
