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
   enum Weekday {Monday, Tuesday, Wed, Thursday, Friday, Saturday, Sunday};

   enum Weekday today = Wed;

   switch (today)
   {
   case  Wed/* constant-expression */:
     /* code */
     printf("today is Wed");
     break;

   case Monday:
    printf("today is monday");
    break;
   default:
    printf ("other");


     break;
   }
 }