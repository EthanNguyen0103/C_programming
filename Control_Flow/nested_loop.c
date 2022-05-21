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
  int sum;
  unsigned int count;
  scanf("%u", &count);
  printf("Start with sum equal 0");
  for(int i =1; i<= count;++i)
    {
      if(count == 3)
      {
        continue;
      }
      else if (count ==4)
      {
        break;
      }
      sum = 0;
      for (int j = 1; j <= i; ++j)
      {
        sum +=j;
      }

      printf("\nnewSum: sum + %d = %d",i,sum);
      
    }


  //Continue

  //Beak


}