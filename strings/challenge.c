#include <stdio.h>
#include <stdbool.h>

int myStrlen();

void myStrcat(char result[] ,const char str1[], const char str2[]);

_Bool myCompare(const char str1[], const char str2[]);
int main()
{
  const char myChar[] = "My name is EthanNguyen";
  char combineResult[] = "";
  const char lastName[] = "Ethan";
  const char firstName[] = "Nguyen"; 
  const char compare1[] = "A";
  const char compare2[] = "A"; 

  printf("length: %d\n",myStrlen(myChar));

  myStrcat(combineResult,lastName,firstName);

  printf("mycompare: %d",myCompare(compare1,compare1));
}

int myStrlen(char readChar[])
{
  int count = 0;
  while (readChar[count] != '\0')
    count++;

  return count;
}

void myStrcat(char result[],const char str1[],const char str2[])
{
  int i,j;
  for(i=0; str1[i] != '\0'; i++)
    result[i] = str1[i];
  
  for(j=0;str2[j] != '\0';j++)
    result[i+j] = str2[j];

  printf("My concat: %s\n",result);
  printf("length: %d\n",myStrlen(result));

}

// // my function it will blow up if str2 bigger
// bool myCompare(const char str1[], const char str2[])
// {
//   bool isEqual = false;

//   for(int i=0; str1[i] != '\0';++i )
//   {
//     if(str1[i]==str2[i])
//       isEqual = true;
//     else
//       isEqual = false;
//   }

//   return isEqual;
// }

bool myCompare(const char str1[], const char str2[])
{
  bool isEqual = false;

  int i;
  while(str1[i]==str2[i] && str1[i] != '\0' && str2[i] != '\0')
  {
    ++i;
  }
  if(str1[i]=='\0' && str2[i]=='\0')
    isEqual = true;
  else
    isEqual = false;
  

  return isEqual;
}
