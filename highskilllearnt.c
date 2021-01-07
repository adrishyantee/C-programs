#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


struct item
{
	char *itemName;
	int quantity;
	float price;
	float amount;
};
void readItem(struct item *p);
void printItem(struct item *p);


void readItem(struct item *p)
{
	printf("Enter the product name:\n");
	scanf(" ",p->itemName);
	gets(p->itemName);
	printf("Enter the price:\n");
	scanf("%f",&p->price);
	printf("Enter the quantity:\n");
	scanf("%d",&p->quantity);
	p->amount=(float)p->quantity*p->price;
}
void printItem(struct item *p)
{
	printf("THE PRODUCT NAME:%s\n",p->itemName);
	printf("QUANTITY:%d\n",p->quantity);
	printf("PRICE:%f\n",p->price);
	printf("AMOUNT:%f\n",p->amount);
}
int main()
{
	struct item cmpny;
	struct item *pcmpny;
	pcmpny=&cmpny;
	cmpny.itemName=(char*)malloc(30*sizeof(char));
	readItem(pcmpny);
    printItem(pcmpny);
    free(cmpny.itemName);
    cmpny.itemName=NULL;
    return 0;
}
	

