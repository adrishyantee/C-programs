#include <stdio.h>

int strlength(const char *pText)
{
	int length;
	char const *beginning,*end;
	beginning=pText;
	while(*pText!='\0')
	{
	pText++;
	end=pText;
    }
	length = end-beginning;
	return length;
}
int main(void)
{
	char a[]="happy birthday";
	printf("leghth of the string is=%d",strlength(a));
	return 0;
}
