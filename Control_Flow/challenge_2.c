/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("This is a guessing game\n You have chosen a number betwwen 0 and 101 which you must guess. Enjoy!!\n");
  int num = 10;
  int count;
  int guest;

  time_t t;

  srand((unsigned)time(&t));

  int randonNumber = rand() %101;

  printf("You have only %d changes:\n",num);
  printf("Enter your number: ");
  scanf("%d", &guest);


  while (guest <= 100 && guest >= 0)
  {
    if (guest>randonNumber)
    {
      --num;
      printf("Number less than that\n");
      
      printf("You have only %d changes:\n",num);
      scanf("%d", &guest);
      if(num == 1)
      {
        printf("You lose\n");
        printf("Number is: %d\n",randonNumber);
        break;
      }

    }
    else if (guest<randonNumber)
    {
      --num;
      printf("Number is bigger than that\n");
      printf("You have only %d changes:\n",num);
      scanf("%d", &guest);
       if(num == 1)
      {
        printf("You lose\n");
        printf("Number is: %d\n",randonNumber);
        break;
      }
    }
    else if (guest = randonNumber)
    {
      printf("You win\n");
      break;
    }
    
  }
 
  
 





}