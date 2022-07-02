#include <stdio.h>
#include <stdlib.h>



struct item
{
  char*itemName;
  int qty;
  float price;
  float amount;

};

void readItem(struct item*i);
void printItem(struct item*i);


int main()
{
  struct item item1;
  struct item *pitem1;

  pitem1 = &item1;

  (*pitem1).amount = 231.34;
  pitem1->qty = 342;
  pitem1->itemName = (char*) malloc(30*sizeof(char));

  if(pitem1== NULL)
    exit(-1);

  //read item
  readItem(pitem1);

  printItem(pitem1);

  free(pitem1->itemName);

  return 0;


}

void readItem(struct item*i)
{
  printf("Enter product name");
  scanf("%s",i->itemName);

  printf("\nEnter price");
  scanf("%f",&i->price);

  printf("\nEnter quanity");
  scanf("%d",&i->qty);

  i->amount = (float)i->qty*i->price;
}

void printItem(struct item*i)
{
      /*print item details*/
	printf("\nName: %s",i->itemName);
	printf("\nPrice: %.2f",i->price);
	printf("\nQuantity: %d",i->qty);
	printf("\nTotal Amount: %.2f",i->amount);
}
