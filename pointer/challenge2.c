#include <stdio.h>
#include <stddef.h>

int countString(const char*value)
{
  int num =0;
  while (*value)
  {
    *value++;
    num++;
  }

  return num;
}


int main()
{
  const char value[] = "A string can not be changed";
  int num = countString(value);  

  printf("%d",num);
  printf("%d\n",countString("stringLength test"));
  printf("%d\n",countString("jason"));
  printf("%d\n",countString(""));

  return 0;
}