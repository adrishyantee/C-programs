#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
static int count=3;
 int m=n;
 int sum=0;
 sum=a+b+c;
 	count++;
 	a=b;
 	b=c;
 	c=sum;
if(count==m)
{
return sum;
}
else{
int s=find_nth_term(m,a,b,c);
return s;
}
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
