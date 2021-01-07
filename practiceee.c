#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
	
    int n,i,sum=0;
scanf("%d",&n);
   for(i=10000;i>=10;)
  {
sum = sum +(n/i);
n=n%i;
i=i/10;
}
printf("%d",sum); 
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
