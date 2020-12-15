#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	char *string;
	int i,point=-1;
	//to find lowest of the successive  subarray(size2)
	for ( i = 0; i < n-1 ; i++)
	{
		if(strcmp(s[i],s[i+1])< 0)
		point=i;
	}
	if (point ==-1)
		return 0;
	//find the element just more that second last element of the sorted subarray from its right(back)
		int min=point;
		int j;
		for(int j=n-1;j>point;j--)
		{
			if(strcmp(s[min],s[j])< 0)
			{
			min=j;
			break;	
			}	 
		}
		string=s[point];
     	s[point]=s[min];
     	s[min]=string;
	//reverse the remaining array
	int start=point+1;
	int end=n-1;
	char *temp;
	while (start <= end)
    {
        temp = s[start]; 
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    } 
    return 1;
	}
int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s =(char**) calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] =(char*) calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
