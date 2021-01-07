#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k;
    scanf("%d", &n);
  	if (n>=1&&n<=1000)
  	{
  		for (i=1;i<=(2*n)-1;i++)
  		{
  			for(j=0;j<(2*n)-1;j++)
			{
			for(k=n;k<j;k++)
			printf("%d ",k);
			}
			printf("%d ",n);
			printf("\n");
		}
    }
	
	// Complete the code to print the pattern.
    return 0;
}
