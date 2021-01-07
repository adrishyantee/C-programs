#include <stdio.h>
#include <stdlib.h>

void Board();
void marking(int ch);
void enteringchoice();
int win();

int choice,player,c=0,rn=2;
char mark;
char p[11]= {'0','1', '2', '3', '4', '5', '6', '7', '8', '9','\0' };


void Board()
{
    system("cls");

    printf("\nTIC TAC TOE\n\n");

    printf("Player 1(X)  -  Player 2(O)\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", p[1], p[2], p[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", p[4], p[5], p[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", p[7], p[8], p[9]);

    printf("     |     |     \n\n");
    return;
}
void enteringchoice()
{
	while (rn!=1||rn!=0)
	{
	Board();
	player=1;
	player=(c%2==0)?1:2;
	printf("Turn for Player %d\n",player);
	printf("Enter your position to mark:");	
	scanf("%d",&choice);
	marking(choice);
	rn=win();
	if(rn==1||rn==0)
	break;
	c++;
}
	return;
}

void marking(int ch)
{
	mark=(player==1)?'X':'O';
    if (ch == 1 && p[1] == '1')
        p[1] = mark;

    else if (ch == 2 && p[2] == '2')
        p[2] = mark;

    else if (ch == 3 && p[3] == '3')
        p[3] = mark;

    else if (ch == 4 && p[4] == '4')
        p[4] = mark;

    else if (ch== 5 && p[5] == '5')
        p[5] = mark;

    else if (ch == 6 && p[6] == '6')
        p[6] = mark;

    else if (ch == 7 && p[7] == '7')
        p[7] = mark;

    else if (ch== 8 && p[8] == '8')
        p[8] = mark;

    else if (ch == 9 && p[9] == '9')
        p[9] = mark;
    else 
    {
        printf("Invalid move-You lost your chance!");
    }
    return;
}
int win()
{
	int r;
    if ((p[1] == p[2] && p[2] == p[3])||(p[4] == p[5] && p[5] == p[6])||(p[7] == p[8] && p[8] == p[9])
    ||(p[1] == p[4] && p[4] == p[7])||(p[2] == p[5] && p[5] == p[8])|| (p[2] == p[5] && p[5] == p[8])
    ||(p[3] == p[6] && p[6] == p[9])||(p[1] == p[5] && p[5] == p[9])||(p[3] == p[5] && p[5] == p[7]))
    {	
	r = 1;
	printf("Player %d won the Game\n",player);
    }
	
    if (p[1] != '1' && p[2] != '2' && p[3] != '3' &&
        p[4] != '4' && p[5] != '5' && p[6] != '6' && p[7]
        != '7' && p[8] != '8' && p[9] != '9')
    {
        r = 0;
        printf("Game Over!!");
    }
    return r;
}
int main()
{
enteringchoice();
return 0;
}
