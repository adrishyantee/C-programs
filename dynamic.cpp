#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


int main()
{
	char *argv=NULL;
	int argc;
	printf("Enter the number of characters u want to enter\n");
	scanf("%d",&argc);
    argv=(char*)calloc(argc+1,sizeof(char));
    printf("Enter the sentence\n");
    scanf(" ",argv);
    gets(argv);
    printf("inputted text:%s",argv);
    free(argv);
    argv=NULL;
    return 0;
}

