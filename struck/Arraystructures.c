#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
}today;

struct month
{
  int numberOfDays;
  char name[2];
} aMonth;


int main()
{

  struct date myDate[5] = 
  {
    {12,12,1222}, 
    {12,2,1322}, 
    {6,12,1622}
  };

  //   struct date myDate[5] = 
  // {
  //   [4] = {6,9,2018}, 
    
  // };

  printf("%d\n", myDate[4].month);

  aMonth.numberOfDays = 31;
  aMonth.name[0] = 'J';
  aMonth.name[1] = 'a';
  aMonth.name[2] = 'n';

  printf("%c\n",aMonth.name[1]);
  printf("%d\n",aMonth.numberOfDays);
}