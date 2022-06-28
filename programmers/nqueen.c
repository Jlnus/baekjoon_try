#include <stdio.h>
#include <stdlib.h>

void init(int *unit[12],int n)
{
    for(int i=0;i<n;i++)
        for(int j =0;j<n;j++)
            unit[i][j] =0;
   return;
}

void queen(int *unit[12], int *cnt,int row, int col,int n)
{
    if(row>n)
    return;
    
}

int solution(int n) 
{
    int answer = 0;
    int unit[n][n];
    init(unit,n);
    queen(unit,answer,0,0,n);
    return answer;
}

int main()
{
	printf("%d\n",solution(4));
}
