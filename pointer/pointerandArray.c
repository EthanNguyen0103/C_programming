#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int values[100]= {1,1,2};
  int *valuesPtr, *valuesPtr1;
  // valuesPtr = &values[0]
  valuesPtr = values;
  valuesPtr1 = &values[2];
  printf("%d\n",*valuesPtr);
  printf("%d\n",*valuesPtr1);
  return 0;
}