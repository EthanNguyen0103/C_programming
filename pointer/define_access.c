#include <stdio.h>
#include <stddef.h>

int main()
{
  int number = 15;
  int *pnumber = &number;
  int result = 0;
  result = 5 + *pnumber;
  // the same 
  printf("%d\n",result);
  printf("%p\n", pnumber);
  printf("%p\n", &number);
  printf("%p\n", (void*)&number);
  printf("%d\n", (int)sizeof(pnumber));
  printf("%p\n\n", (void*)&pnumber);

  pnumber = NULL;
  printf("%d\n",result);
  printf("%p\n", pnumber);
  printf("%p\n", &number);
  printf("%p\n", (void*)&number);
  printf("%d\n", (int)sizeof(pnumber));
  printf("%p\n", (void*)&pnumber);

  return 0;
} 