#include <stdio.h>

void multiplyTwoNumbers(int x,int y)
{
  int result = x*y;
  printf("number 1: %d, number 2: %d multiplied is %d\n",x,y,result);
}
int multiply(int x,int y)
{
  return x*y;
}

int main()
{
  multiplyTwoNumbers(10,20);
  multiplyTwoNumbers(23,12);
  multiplyTwoNumbers(21,31);
  int result = multiply(11,10);
  printf("%d",result);
  return 0;
}
