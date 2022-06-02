#include <stdint.h>
#include <stdio.h>

#define MONTHS 12
int main () 
{
  // int counters[5] = {1,2,3,4,5};
  // int data[5] = {[4]=1,[3]=6};
  // printf("%d",counters[4]);
  
  // printf("%ls",data);

  // int day[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
  // int index;
  // day[1] = 29;
  // day[4] = 30;

  // for(index=0;index<MONTHS;index++)
  // {
  //   printf("Month %d has %2d day .\n",index+1,day[index]);
  // }

  int array[10] = {0,1,2,3,4};
  int i;

  for(i=5;i<10;++i)
  {
    array[i] = i;
  }
  for(i=0;i<10;++i)
  {
    printf("array[%i]=%i\n",i,array[i]);
  }
     int num1 ,num2;
   int num3, num4;
   scanf("%i%d",&num1 , &num2);
   printf("%i\t%d\n",num1, num2);
   num3 = 010;
   num4 = 010;
   printf("%i\t%d",num3, num4);
}