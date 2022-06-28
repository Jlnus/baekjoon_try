#include <stdio.h>

int w,h,x,y,p;

int check(int posx, int posy)
{
	if(
}

int main()
{
	int posx,posy,cnt=0;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&p);
	
	for(int i=0; i<p; i++)
	{
		scanf("%d %d",posx, posy);
		cnt += check(posx, posy);
	}
	printf("%d",cnt);
	
}
