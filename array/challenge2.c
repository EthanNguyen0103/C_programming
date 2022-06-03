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
float year2010,year2011,year2012,year2013,year2014;
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

    // for(int i=0;i<5;++i)
    // {
    //   for(int j=0;i<12;++j)
    //   {
    //   count++;
    //   }
    // }

  
      for(j=0;j<12;++j)
      {
       //printf("rain: %.2f\n",rain[i][j]);
        count+=1;
        year2010 += rain[0][j];
        year2011 += rain[1][j];
        year2012 += rain[2][j];
        year2013 += rain[3][j];
        year2014 += rain[4][j];
      }
      for(i=0;i<5;++i)
      {
        Jan += rain[i][0]; 
        Feb += rain[i][1]; 
        Mar += rain[i][2]; 
        Apr += rain[i][3]; 
        May += rain[i][4]; 
        Jun += rain[i][5]; 
        Jul += rain[i][6]; 
        Aug += rain[i][7]; 
        Sep += rain[i][8]; 
        Oct += rain[i][9]; 
        Nov += rain[i][10]; 
        Dec += rain[i][11]; 
      }
        Jan = Jan/years;
        Feb = Feb/years;
        Mar = Mar/years;
        Apr = Apr/years;
        May = May/years;
        Jun = Jun/years;
        Jul = Jul/years;
        Aug = Aug/years;
        Sep = Sep/years;
        Oct = Oct/years;
        Nov = Nov/years;
        Dec = Dec/years;
      averages = (year2010+year2011+year2012+year2013+year2014)/years;

      printf("YEAR  RAINFALL(inches)\n");
      printf("2010: %.1f\n",year2010);
      printf("2011: %.1f\n",year2011);
      printf("2012: %.1f\n",year2012);
      printf("2013: %.1f\n",year2013);
      printf("2014: %.1f\n",year2014);

      printf("The yearly average is %.1f\n", averages);

    printf("MONTHLY AVERAGES:\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    printf("%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f",Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec);


    return 0;
}