#include <stdio.h>
#include <stdlib.h>

int main()
{
  int value = 999;
  int *pnumber = NULL;

  pnumber = &value;
  *pnumber += 25;
  printf("%p\n",&pnumber);
  printf("%d\n",*pnumber);
  printf("%d",value);


  int scan = 0;
  int *pvalue = &scan;

  printf("Input value");
  // scanf("%d",&scan);
  scanf("%d",pvalue);
  printf("%d",scan);

    return 0;
}