/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>

//int main(int argc, char*argv[])
int main()
{
  // use argv to input a number by using atoi
  //double width = atoi(argv[1]);
  //double height = atoi(argv[2]);

  // user can input a width or height
  double width ;
  printf("Enter a width:");
  scanf("%lf", &width);
  double height;
  printf("Enter a height:");
  scanf("%lf", &height);

  double perimeter = 0;
  double area = 0;

  perimeter = 2.0 *( width + height);
  area = width * height;

  printf("height: %.1f, width: %.1f, perimeter: %.1f ",height, width, perimeter);
  printf("\nheight: %.1f, width: %.1f, area: %.1f ",height, width, area);
}
