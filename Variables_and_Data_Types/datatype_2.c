/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h> // using bool variants

int main()
{
  enum primaryColor {red,yellow, blue};
  enum primaryColor myColor, gregsColor;

  myColor =red;
  myColor = blue; 
  
  printf("%d\n", blue);

  char broiled;
  broiled = 'T';
  //broiled = T;
  //broiled = "T";

  char x = '\n';

  enum gender {male = 1,female};

  enum gender myGender;

  myGender = male;

  printf("%d", myGender);

  char myCharacter = '\n';

  printf("%c", myCharacter);  







  return 0;
}
