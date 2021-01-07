#include <stdio.h>
void swap(int *const x,int *const y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
 return;
}
int main(void)
{
	int a=50;
	int b=60;
	swap(&a,&b);
	printf("Numbers are %d %d",a,b);
	return 0;
}
