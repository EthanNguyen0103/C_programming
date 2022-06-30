#include <stdio.h>

int main()
{
  int number = 99;
  int *pnumber = &number;
  printf("%p", pnumber);
}