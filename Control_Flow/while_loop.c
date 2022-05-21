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
  // int count =1;

  // while (count <=5)
  // {
  //   printf("%d\n", count);
  //   ++count;
  // }

  int num =0;
  scanf("%d", &num);

  while(num != -1)
  {
    scanf("%d", &num);
  }

  // while(num=-1)
  // {
  //   printf("You fuck up\n");
  //   scanf("%d", &num);
  // }

  // // do-while loop
  do
  {
    printf("You fuck up\n");
    scanf("%d", &num);
  } 
  while (num=-1);
  

}