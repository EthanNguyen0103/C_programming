/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>

#define taxRate1 .15
#define taxRate2 .20

int main()
{
  int hours;
  double grossPay;
  double Taxes;
  double netPay;
  double newTaxes_2;


  printf("Enter your number of hours:");
  scanf("%d" ,&hours);


  
  if (hours >40)
  {
    int newHour = hours-40;
    grossPay = 40*12 + newHour*18;
    printf("your gross pay:%f\n", grossPay);
  }
  else
  {    
    grossPay = hours*12;
    printf("you work under or equal 40 hours\n");
    printf("Your grossPay:%f\n",grossPay);

  }

  if(grossPay <= 300)
  {
    Taxes = (grossPay/100)*15;
    printf("your taxes:%f\n", Taxes);
    netPay = grossPay - Taxes;
    printf("your netPay:%f\n", netPay);

  }
  else if(grossPay>300 && grossPay <=450)
  { 
    double newTaxes = grossPay - 300;
    Taxes = (300/100)*15 + (newTaxes/100)*20;
    printf("your taxes:%f\n", Taxes);
    netPay = grossPay - Taxes;
    printf("your netPay:%f\n", netPay);

  }
  else if(grossPay>=450)
  {
    double newTaxes = grossPay -450;
    Taxes =  300*taxRate1 + 150*taxRate2 +(newTaxes/100)*25;
    printf("your taxes:%f\n", Taxes);
    netPay = grossPay - Taxes;
    printf("your netPay:%f\n", netPay);

  } 


return 0;
}