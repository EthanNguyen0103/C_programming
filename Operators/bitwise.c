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
  // int num1 = 105;
  // int num2 = num1<<1;

  // num2 = ~num2;
  // printf("%d",num2);

  unsigned int a =60; // 0011 1100
  unsigned int b =13; // 0000 1101

  int result =0;
  int result2 =0;
  int result3 =0;
  int result4 =0;
  int result5 =0;
  int result6 =0;

  result = a & b;
  result2 = a | b;
  result3 = a ^ b;
  result4 = ~a ;
  result5 = a<<2;
  result6 = a>>2;
 
  printf("%d\n",result);
  printf("%d\n",result2);
  printf("%d\n",result3);
  printf("%d\n",result4);
  printf("%d\n",result5);
  printf("%d\n",result6);
  
}
