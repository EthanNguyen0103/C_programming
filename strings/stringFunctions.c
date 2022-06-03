#include <stdio.h>
#include <string.h>

int main()
{
  char myString[] = "my string";
  

  // size of string
  printf("The length of this string is: %ld\n", strlen(myString));

  //copy strings

  char src[5];

  //src = "ten"; it is not modify a string so I use this instead
  // strcpy(src,"This is a source\n");
  // printf("\n%s", src);
  // printf("The length of this string is: %ld\n", strlen(src));

  strncpy(src,myString,sizeof(src)-1); // we -1 to have space for teminal \0 if it overflow

  printf("%s\n", src);
  printf("The length of this string is: %ld\n", strlen(src));
  
  
  // string cat
  char src1[50], dest[50];

  strcpy(src1, " this is source");
  strcpy(dest, "This is destination");

  strncat(dest,src1,15);
  //strcat(dest,src1); it will blow up if dest don't have enough size

  printf("\n%s\n",dest);
  // string compare

  printf("%d\n",strcmp("B","A"));
  printf("%d\n",strcmp("z","A"));
  printf("%d\n",strcmp("apples","apple"));
  printf("%d\n",strcmp(src1,dest));

  return 0;
}