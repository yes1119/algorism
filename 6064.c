/*
problem : https://www.acmicpc.net/problem/6064
*/

#include <stdio.h>

int main()
{
	int t,M,N,x,y,i,j,k=1;

	scanf("%d",&t);

	while(t--)
	{
		scanf("%d %d %d %d",&M,&N,&x,&y);
		i=1;
		j=1;
		while(1)
		{
			if(i<M)
				i++;
			else
				i=1;

			if(j<N)
				j++;
			else
				j=1;

			if(i == x && j ==y)
				break;

			if(i == M && j ==N)
			{
				k=-2;
				break;
			}

			k++;
		}

		printf("%d",k+1);

	}
   
    return 0;
}