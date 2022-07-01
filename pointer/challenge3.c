#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void math(int*num)
{
  *num = *num * *num;
}
int main()
{
  int num =5;
  math(&num);
  printf("%d\n",num);
    return 0;
}
