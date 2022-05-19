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
  int number,remain;
  scanf("%i",&number);
  
  remain = number%2;


  if (remain==0)
  { 
   printf("even");
  }
  else
  {
    printf("odd");
  }

  int x;
  int y=4;
  x = y>7 ? 32 : 50;
  printf("x: %i", x);
}