#include <stdio.h>

int main()
{	
char ar[12][9]={{' ',' ',' ',' ','*',' ',' ',' ',' '},
{' ',' ',' ','*',' ','*',' ',' ',' '},
{' ',' ',' ','*','*','*',' ',' ',' '},
{' ',' ','*',' ',' ',' ','*',' ',' '},
{' ','*',' ',' ',' ',' ',' ','*',' '},
{'*','*','*','*','*','*','*','*','*'},
{'*',' ',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ',' ','*'},
{'*','*','*','*','*','*','*','*','*'}};
int i,j;
for(i=0;i<12;i++)
{
	for (j=0;j<9;j++)
	printf("%c ",ar[i][j]);
	printf("\n");
}
	return 0;
}

