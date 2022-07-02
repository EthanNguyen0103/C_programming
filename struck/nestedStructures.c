#include <stdio.h>






struct date
{
  int month;
  int day;
  int year;
}today;

struct time
{
  int hours;
  int minutes;
  int seconds;
} time1;

struct dateAndTime
{
  struct date sdate;
  struct time stime;  
} event;

int main()
{
  event.sdate.month = 10;
  struct dateAndTime even1 = {{.month = 2,.year = 2013},{.hours = 3, .seconds =45,.seconds= 23}}; 

  printf("%d",even1.stime.seconds);


}