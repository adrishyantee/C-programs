#include <stdio.h>

int main()
{
    int p,o,a,b,c,x,i,k=1,e,j=0;
    printf(".......Welcome to my Truth game........\n");
    printf("If you want to continue-Press 1\n");
    scanf("%d",&p);
if(p==1)
{
    printf("..........|||||INTRUCTIONS|||||............\n");
    printf("There are 21 numbers\nAnd there are 2 players\nYOU AND ME\n");
    printf("Each player can enter upto 3 numbers consecutively and we will start from 1 and end upto 21\n ");
    printf("The player who will get number 21 will be the loser and have to answer a truth question\n");
    printf("Are you ready?Press 1\n");
    scanf("%d",&o);
}
    if(o==1)
    {   
       do
         { 
printf("Enter your numbers\n");     
printf("Enter your Ist number\n");        
 scanf("%d",&a);    
printf("Enter your 2nd number, if you dont want to, press 0\n");
scanf("%d",&b);
printf("Enter your 3rd number, if you dont want to, press 0\n");
scanf("%d",&c);
int s=a;
if(b!=0)
s=b;
if(c!=0)
s=c;
j=s;
           for(i=0;i<((4*k)-s);i++)
           {
           	j++;
           printf("My number is %d\n,",j);
           }
        printf("Your turn to enter\n");
        k++;
        }while(k<=5);
    }      
printf("HAHA! Because you have to say 21 now u lost and now you have to take the truth\n");
printf("Excited for your truth ?? press  any one of 1,2,3,4,5 for your truth\n");
scanf("%d",&e);
if(e==1)
printf("Who's your crush?\n");
if(e==2)
printf("What is your darkest fantasy?\n");
if(e==3)
printf("Will you date me?\n");
if(e==4)
printf("Do you love me secretly?\n");
if(e==5)
printf("Wanna hangout?\n");
printf("To play once again- start again\n");
return 0;
}
