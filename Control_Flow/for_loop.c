/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>

int main()
{
  for (int count =1; count<=10; ++count)
    {
      printf("%d\n", count);
    }
  
  unsigned int sum =0;
  unsigned int count =0;

  scanf("%u", &count);

  // for(unsigned int i = 1; i<=count; ++i)
  // {
  //   // sum = sum+i
  //   sum += i;  
  // }

  for(unsigned int i = 1; i<=count;sum+=i++)
  {}  
  

  printf("Total:%u",sum);

  // infinite loop

  for(;;)
  {
    /*statement*/
  }
    
}