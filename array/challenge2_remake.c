/*
-----------------------------------------------------------------------------
Author: Ethan Nguyen
Purpose: 
Date: 00-00-0000
------------------------------------------------------------------------------
*/
#include <stdio.h>

# define months 12
# define years  5

int count = 0;
float year2010,year2011,year2012,year2013,year2014,year,month,totalYear;
float averages;
float Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec;
int i,j;
int main()
{
  float sum;

    // initialize rainfall data for 2011-2015
    float rain[years][months] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

  
      for(i=0;i<5;++i)
      {
        year = 0;
        for(j=0;j<12;++j)
        {
          year += rain[i][j]; 
        }
        printf("%5d\t\t%.1f\n",2010 + i,year);
        totalYear+= year;
      }
        printf("Averages: %.1f\n",totalYear/5);
        printf("Months Averages:\n");


      for(j=0;j<12;++j)
      {
        month =0;
        for(i=0;i<5;i++)
        {
          month += rain[i][j]; 
        }
        printf("%d \t\t%.1f\n",j+1,month/5);
      }
       

    return 0;
}