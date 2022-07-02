#include <stdio.h>

struct Family
{
  char name[20];
  int age;
  char father[20];
  char mother[20];
};

bool sibling(struct Family member1, struct Family member2)
{
  if(strcmp(member1.mother,member2.mother)==0)
    return true;
  else
    return false;
}
