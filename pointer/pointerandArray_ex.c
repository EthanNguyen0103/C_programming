#include <stdio.h>
#include <string.h>

int main(void)
{ 
  int i;
  char multiple[] = "a string";
  char *p = multiple;

  for (i=0; i<strlen(multiple);++i)
  {
    printf("multipple[%d] = %c *(p+%d)= %c &multiple[%d]= %p p+%d = %p\n",i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
     
  }

  printf("%c\n",*(p+0));
  printf("%p\n", p+0);
  printf("%p\n", &multiple[0]);

      return 0;

}