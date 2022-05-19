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
  int integerVar = 100;
  float floatingVar = 322.121;
  double doubleVar = 2.232e+11;
  char charVar = 'W';
  _Bool boolVar = 0;

  printf("integerVar: %i and %f\n", integerVar, floatingVar);
  printf("floatingVar: %f\n", floatingVar);
  printf("doubleVar: %e\n", doubleVar);
  printf("doubleVar: %g\n", doubleVar);
  printf("charVar: %c\n", charVar);
  printf("boolVar: %i\n", boolVar);

  printf("floatingVar: %.2f",floatingVar);

}

