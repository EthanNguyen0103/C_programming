#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 10;
  float f = 2.34;
  char ch = 'k';

  void *vptr;

  vptr = &i;
  printf("%d\n",*(int*)vptr);
  vptr = &f;
  printf("%f\n",*(float*)vptr);
  vptr = &ch;
  printf("%c\n",*(char*)vptr);

    return 0;
}