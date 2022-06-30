#include <stdio.h>
#include <stddef.h>

int main()
{
  int *pnum = NULL;
  int num = 69;
  pnum = &num;
  
  // value of pointer
  printf("%p\n", pnum);

  // adress of pointer
  printf("%p\n",&num);
  printf("%p\n", pnum);
  printf("%p\n", &pnum);

  // the value of what pointer pointing to
  printf("%d\n", *pnum);


  return 0;
}