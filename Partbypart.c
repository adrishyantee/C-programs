#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i=0;
    s =(char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*)realloc(s, strlen(s) + 1);
    while(s[i]!='\0'){
    if(s[i]==' '&& s[i+1]!=' '){
    printf("\n");
    }
    else if(s[i]==' '&& s[i+1]==' ')
    break;
    else
    printf("%c",s[i]);
    i++;
    }
	free(s);//Write your logic to print the tokens of the sentence here.
    return 0;
}
