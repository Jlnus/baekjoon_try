#include <string.h>
#include <stdio.h>

int main()
{
	char s[101];
	gets(s);
	printf("%d", strlen(s));
}