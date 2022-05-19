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
   char str[100];
   int i;

   printf("enter the value:");
   scanf("%s %d", str, &i);

   printf("\nYou entered: %s %d ", str, i);

   return 0;
 }