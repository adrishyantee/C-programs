#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	double area[1000];
	int j;
	for(j=0;j<n;j++)
	{
			double s=(tr[j].a + tr[j].b + tr[j].c)/2.0;
    		area[j]=s*(s-tr[j].a)*(s-tr[j].b)*(s-tr[j].c);
	}
    int counter=1,i;
    while(counter<n)
    {
    	for (i=0;i<n-counter;i++)
    	{
    		if (area[i]>area[i+1])
    		{
    			int t=area[i];
    			area[i]=area[i+1];
			    area[i+1]=t;
    			int temp=tr[i].a;
    			tr[i].a=tr[i+1].a;
				tr[i+1].a=temp;
				int tem=tr[i].b;
    			tr[i].b=tr[i+1].b;
				tr[i+1].b=tem;
			    int te=tr[i].c;
    			tr[i].c=tr[i+1].c;
				tr[i+1].c=te;
			}
		}
		counter++;
	}
    
    /**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
