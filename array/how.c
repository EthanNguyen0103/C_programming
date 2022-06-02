#include <stdio.h>


int main()
{
  int garades[10];
  int count = 10;
  long sum = 0;
  float average = 0.0f;
  printf("\nEnrger the 10 grades: \n");

  int i;
  for(i =0; i<count;++i)
  {
    printf("%2u>", i+1);
    scanf("%d", &garades[i]);
    sum += garades[i];
  }
  average = (float)sum/count;
  printf("how many i:%d",i);
  printf("\n Average of ten grades entered %.2f\n", average);


  return 0;
}
