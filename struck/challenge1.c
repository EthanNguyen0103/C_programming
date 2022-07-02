#include <stdio.h>

struct employee
{
 char name[30];
 char date[15];
 float salary;

};

int main()
{
  struct employee emp1 = {"Mike", "3/5/2001", 23424.32};
  struct employee emp2;


  printf("%s\n", emp1.name);
  printf("%s\n", emp1.date);
  printf("%f\n", emp1.salary);

  scanf("%s",emp2.name);
  scanf("%s",emp2.date);
  scanf("%f",&emp2.salary);


  printf("%s\n", emp2.name);
  printf("%s\n", emp2.date);
  printf("%f\n", emp2.salary);



}
