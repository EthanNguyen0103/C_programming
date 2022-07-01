#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//   int number = 199999;
//   // int *pNumber = (int*)malloc(10);
//   // int *pNumber = (int*)(25*sizeof(int));
//   int *pNumber = (int*)calloc(25,sizeof(int));
//   // pNumber = &number;
//   // while(pNumber)
//   // {
//   //   number++;
//   //   printf("\n%d\n",number);
//   // }
//   // if(!pNumber)
//   // {printf("error");
//   // }
//   printf("%d", pNumber);  
// }

int main()
{
  char*str = NULL;

  str = (char*)malloc(6*sizeof(char));
  strcpy(str,"jason");
  printf("String = %s, Adress = %p\n", str,str);

  str =(char*)realloc(str,5*sizeof(char));
  strcat(str,".com");
  printf("String = %s, Adress = %p\n", str,str);

  free(str);

  return 0;
}