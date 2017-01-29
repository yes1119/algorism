/*
problem : https://www.acmicpc.net/problem/1193
*/

#include <stdio.h>
 
int main()
{
    int n;
    int d;
	int num= 0,i=1;
 
    scanf("%d", &n);

	while(num < n)
	{
		num+=i;
		i++;
	}
	num-=--i;

	d= n-num;


	if ((i % 2))
		printf("%d/%d\n", i-d+1, d);	
    else
		printf("%d/%d\n", d, i-d+1);
		
	
    return 0;
}
