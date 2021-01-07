#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	time_t t;
	srand((unsigned)time(&t));
	int r =rand()%21;
int a,i,n=0,b=0;
char str[100];
printf(".................WELCOME TO GUESS THE NUMBER GAME.................\nI have choosen a number between 0 and 20 which u must guess!\nYou have 5 tries with you.Are you ready?? Press 1\n");
scanf("%d",&a);
if (a==1)
{
	for (i=5;i>0;i--)
	{
		if(b==0)
		{
	printf("You have %d tries left\n",i);
	printf("Enter a guess:\n");
	scanf("%d",&n);
	while(n<0 || n>20)
	{
		printf("This number is invalid! Add a proper number between 0 and 20\n");
		scanf("%d",&n);
	}
	if(n>=0 && n<=20)
	{
	if(n>r)
	printf("Sorry %d is wrong. My number is less than that\n",n);
	if(n<r)
	printf("Sorry %d is wrong.My number is more than that\n",n);
	if (n==r)
	{
		printf("WOAAAH!! Right guess!Now there's a dare for me!Tell me :)\n");
		b++;
	}
    }
    }
	}
	if(b==1)
	{
	scanf("%s",str);
	printf("I wont do :)!!");
	}
    if (b==0)
	printf("You lost the game!!Now you have to take my dare\nCan u bring me the moon?\nBYE!Thanks for playing!");
}
return 0;
}
