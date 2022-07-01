#include <stdio.h>
#include <string.h>

void copyString(char*to,char*from)
{
  while(*from)
    {
      printf("%c\n",*from);
      *to++=*from++;
    }
  *to = '\0';

}

int main(void)
{ 
  char string1[] = "A string to be copied";
  char string2[50];

  copyString(string2,string1);
  printf("%s\n",string2);

      return 0;

}