#include <stdio.h>
int main ()
{
	enum mood{sad,angry,happy,excited};
	enum mood bb;
	int gg,hh;
	bb=sad,hh=angry;
	printf("which mood are u in? 0-sad,1-angry 2-happy,4-excited");
	printf("Enter your mood no.\n");
	scanf("%d",&gg);
	if(bb==gg||gg==hh)
	{
	printf("Why so?\n");
    }
    else
	printf("thats fine");
	return 0;
	
}                                                                                                                                                                                                                   
