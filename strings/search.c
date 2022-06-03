#include <stdio.h>
#include <string.h>

int main()
{
   // we use strchr() to seach only a char
   char str1[] = "The quick brown fox"; // the sring to be search
   char ch = 'b'; // the character we are looking for
   char*pGot_char = NULL; // pointer initialized are
   pGot_char = strchr(str1,ch); //stores adress where ch found
   printf("%s\n",pGot_char);

   //we use strstr() to search a string
   char text[] = "Every dog has his day";
   char word[] = "dog";
   char *pFound = NULL;
   pFound = strstr(text,word);
   printf("%s\n",pFound);

   //tokenizing a string
   char str[80] = "Hello my name -Nguyen-Ethan-nguyen";
   const char s[2] = "-";
   char *token;
   
   token = strtok(str,s);
   while (token !=NULL)
   {
     printf("%s\n",token);
     token = strtok(NULL,s);
   }
   
   return 0;
}