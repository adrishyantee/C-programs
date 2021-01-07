#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
	int diff;
	float a,b;
	float d;
	scanf("%d %d\n",&n,&m);
	scanf("%f %f",&a,&b);
	if(n>m)
	diff=n-m;
	else 
	diff=m-n;
    if(a>b)
	d=a-b;
	else 
	d=b-a;
	printf("%d %d\n",n+m,diff);
	printf("%.1f %.1f",a+b,d);
    return 0;
}
