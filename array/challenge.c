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
  int numbers[1000] ={3,5,7} ;
  printf("is prime: %d\n",numbers[0]);
  printf("is prime: %d\n",numbers[1]);
  printf("is prime: %d\n",numbers[2]);

int count=3;
  for(int i=3;i<100;++i)
  {
    numbers[i]= i;
    if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
    {
     printf("is prime: %d\n",numbers[i]);
     count++;
    }
  }
  printf("there are: %d numbers is prime from 3 to 100",count);

  //printf("%d",numbers[0]);
}