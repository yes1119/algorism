/*
problem : https://www.acmicpc.net/problem/1065
*/

#include <stdio.h>

int main() 
{
	int N,count=0;
	int a, b, c;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		if (i < 100)
			count=i;
		if (i >= 100 && i < 1000)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10 / 1;

			if (a - b == b - c)
				count++;
		}
		
	}
	printf("%d", count);
    
    return 0;

}
