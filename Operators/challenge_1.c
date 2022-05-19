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
  int minutes;
  printf("Enter your minutes:");
  scanf("%d", &minutes);

  double minutesInYear = 0;
  
  minutesInYear = 60*24*365;
  
  double days;

  days = (minutes/60.0)/24.0;

  printf ("there are %f days\n",days);

  double years;
  years = days/365;
  printf ("there are %f years\n", years);



  
return 0;
}