#include <stdio.h>
int main ()
{
	enum mood{sad,angry,happy,excited};
	enum mood bb;
	int gg;
	bb=sad;
	printf("which mood are u in? 0-sad,1-angry 2-happy,4-excited\n");
	printf("Enter your mood no.\n");
	scanf("%d",&gg);
	if(bb==gg)
	{
	printf("Why so?\n");
    }
    else
	printf("thats fine");
	return 0;
	
}                                                                                                                                                                                                                   
