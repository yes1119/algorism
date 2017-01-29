/*
problem : https://www.acmicpc.net/problem/1011
*/
#include <stdio.h>

int main()
{
	long long n,i,x,y,count,move,distance,cur;
	scanf("%d",&n);


	for(i = 0 ; i < n ; i ++)
	{	
		scanf("%d %d",&x,&y);
		
		distance = y-x;
		cur=0;
		count=0;
		move=1;

		while(cur<distance)
		{
			if(move*2<distance-cur)
			{
				cur+=move*2;
				move++;
				count+=2;
			}
			else
			{
				cur+=move;
				count++;
			}
		}

		printf("%d\n",count);

	}

	return 0 ;
}