#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a,int b);
float absol(float k);
double sq(double t);


int main()
{
	int q,w;
	float e,f;
	printf("Enter two numbers for finding gcd\n");
	scanf("%d",&q);
	scanf("%d",&w);
	printf("Enter number for finding absolute\n");
	scanf("%f",&e);
	printf("Enter Number to find squareroot\n");
	scanf("%f",&f);
	int a=gcd(q,w);
	printf("The greatest common divisor is %d\n",a);
	float b=absol(e);
	printf("The absolute value is %f\n",b);
	double c=sq(f);
	if(c==-1)
	printf("INVALID");
	else
	printf("The Square Root= %.2lf",c);
	return 0;
}
int gcd(int a,int b)
{
	int i,s=0,g;
if (a<b)
s=a;
else
s=b;
	for(i=1;i<=s;i++)
	{
		if(a%i==0&&b%i==0)
		g=i;
	}
	return g;
}

float absol(float k)
{
	float ab;
	if (k<0)
	ab= -k;
	else
    ab=k;
	return ab;
}

double sq(double t)
{
	if(t<0)
	{
	return -1.0;
    }
    if(t>0)
    {
	double num= absol(t);
	double square=sqrt(num);
	return square;
    }
}



