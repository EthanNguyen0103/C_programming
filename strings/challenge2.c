#include <stdint.h>
#include <string.h>
#include <stdio.h>

// void reverseOrder(char order[]);

int main()
{
  char resever[50];
  char name[25][50], temp[25];
  int n,j; 
  printf("Enter a string i will reserve it: ");
  scanf("%s",resever);
  int count = strlen(resever);
  printf("%d\n",count);
  int i;
  for(i=count; i>=0;--i)
  {
    printf("%c",resever[i]);
    
  }
  printf("\n");
  printf("------------------------------");

  printf("Input number of strings:");
  scanf("%d",&n);
  printf("Input string %d: \n",n);

  for(i=0;i<=n;i++)
  {
    scanf("%s", name[i]);
  }
  for(i=1;i<=n;i++)
    {
      for(j=0;j<=n-i;j++)
        if(strcmp(name[j],name[j+1])>0)
        {
            strncpy(temp,name[j], sizeof(temp) - 1);
            strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
            strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
        }
    }
    printf("The strings appear after sorting :\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

  return 0;
}

// void reverseOrder(char order[])
// {
//   int lastChar = strlen(order);
//   for(int i=0; order[i] != '\0';i++)
//   {
//     order[i] = 1;
//   }

//   printf("%s\n",order);
// }