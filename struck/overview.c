#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
}today;
  
int main()
{

  // struct  date today;
  
  today.month = 9;
  today.day = 25; 
  today.year = 2015;
  int century = today.year/100+1;


  printf("%d\n%d\n%d\n",today.month,today.day,today.year);
  printf("%d\n",century);

  struct date today = {12,10}; 

  printf("%d\n%d\n%d\n",today.month,today.day,today.year);
  printf("%d\n",century);



  struct date date1 = {.day = 10,.month =10}; 



  printf("%d\n%d\n%d\n",date1.month,date1.day,date1.year);

  today = (struct date){6,9,2015};
  today = (struct date){.month = 9,.day = 6,.year = 2069};

  printf("%d\n%d\n%d\n",today.month,today.day,today.year);

}