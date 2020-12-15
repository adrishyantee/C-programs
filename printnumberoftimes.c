#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char *s;
int arr[10]={0,0,0,0,0,0,0,0,0,0};
    s =(char*) malloc(1000 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*)realloc(s, strlen(s) + 1);
	int k;
	int	i=0;
	while(s[i]!='\0'){
		int c=s[i];
		if(c>=48&&c<=57)
		arr[c-48]++;
		i++;
	}
for(i=0;i<10;i++)
printf("%d",arr[i]);
	free(s);  
	return 0;
}

