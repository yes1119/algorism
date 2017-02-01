/*
problem : https://www.acmicpc.net/problem/10250
*/

#include <stdio.h>

int main()
{
	int t,h=0,w=0,n=0,i,j;

    scanf("%d",&t);

	while(t--)
	{
		scanf("%d %d %d",&h,&w,&n);

		i= (n-1)/h;
		j= (n-1)%h;

		printf("%d%02d\n",j+1,i+1);
	}


	return 0 ;
}