/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>


int main(){
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT=10,DOGE };
  int num1 = XEROX;
  int num2 = GOOGLE;
  int num3 = EBAY;

  printf("%d\n%d\n%d\n", XEROX, GOOGLE, EBAY);
  
  //some stuff
  printf("%d\n%d",MICROSOFT, DOGE);
  return 0;
}