#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int values[100]= {1,1,2};
  int *valuesPtr;
  // valuesPtr = &values[0]
  valuesPtr = values;
  printf("%d",*valuesPtr);
  return 0;
}