#include <stdio.h>

int main()
{
  //matrix

  int numbers[3][4]=
  {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };

  int matrix[4][5] ={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {1,2,3}
  };
  //printf("%d",matrix[2][2]);

  int three_demensional[2][3][4] =
  {
    {
      {1,2,3,4},
      {3,4,5,6},
      {7,8,9,1}
    },
    {
      {3,2,1,4},
      {11,12,13,14},
      {17,16,15,14}
    }
  };

  printf("%d\n",three_demensional[1][1][1]);   //12
  printf("%d\n",three_demensional[0][2][3]);   //1
  // want to processing elements in a n dimensional
  int sum=0;
  int count=0;
  for(int i=0;i<2;++i)
  {
    for(int j=0;j<3;++j)
    {
      for (int k = 0; k < 4; ++k)
      {
        sum +=three_demensional[i][j][k];
        printf("sum:%d\n",sum);
        count+=1;
      }
    }
  }
  printf("count:%d",count);

}