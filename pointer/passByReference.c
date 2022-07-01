// #include <stdio.h>
// #include <stddef.h>

// void swap(int x,int y)
// {
//   int temp;

//   temp =x; 
//   x=y;
//   y= temp;

//   return;
// }   



// int main()
// {
//   int x =10;
//   int y =20;
//   printf("%d\n",x);
//   printf("%d\n",y);
//   swap(x,y);
//   printf("%d\n",x);
//   printf("%d\n",y);
//   return 0;
// }


#include <stdio.h>
#include <stddef.h>

void swap(int*x,int*y)
{
  int temp;

  temp =*x; 
  *x=*y;
  *y= temp;

  return;
}   



int main()
{
  int x =10;
  int y =20;
  printf("%d\n",x);
  printf("%d\n",y);
  swap(&x,&y);
  printf("%d\n",x);
  printf("%d\n",y);
  return 0;
}