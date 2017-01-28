/*
problem : https://www.acmicpc.net/problem/2292
*/

#include <stdio.h>
int main(void)
{
	int count = 1;
	int increment = 0;
	int input;
        
    scanf("%d",&input);
 
 
	for (int i = 2; i <= input; i++)
	{
		if (i== 6*increment+2)
		{
			increment += count;
			count++;		
		}
	}
 
	printf("%d", count);
    
    return 0;
 
 
}
