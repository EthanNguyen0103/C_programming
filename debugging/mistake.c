#include <stdio.h>

#include "callstack.c"
int main()
{
//  int j = 100;
//  if(j==100)   
//     j=0;
//   printf("%d",j);
  int a[100], i ,sum=0;
  for (i=0;i<=100;++i)
    {a[i] = i;
    sum +=a[i];
    printf("num :%d\n",sum);}
  printf("%d\n",sum);

  return 0;
}