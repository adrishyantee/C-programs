#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
 
 int maxand=0,maxor=0,maxxor=0;
 int a,b,i,j,an,xr,r;
 for (i=1;i<n;i++)
 {
     
     for (j=i+1;j<=n;j++)
     {
     	a=i,b=j;
         an=a&b;
         r=a|b;
         xr=a^b;
         if(an<k && an>maxand)
         {
             maxand=an;
         }
          if(r<k && r>maxor)
         {
             maxor=r;
         }
          if(xr<k && xr>maxxor)
         {
             maxxor=xr;
         }

     }
 }
     printf("%d\n%d\n%d\n",maxand,maxor,maxxor); 
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

