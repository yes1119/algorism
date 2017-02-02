/*
problem : https://www.acmicpc.net/problem/1475
*/

#include <stdio.h>

int main()
{
	int arr[10]= {0};
    int number;
    int cnt;
    int i;
 
    scanf("%d", &number);
 
    while (number) 
	{
        arr[number % 10]++;
        number /= 10;
    }
    
    cnt = (arr[9] + arr[6] + 1) / 2;
 
    for (i = 0; i < 9; i++) 
	{
        if (i != 9 && i != 6) 
		{
            if (arr[i] > cnt)    
				cnt = arr[i];
        }
    }
 
    printf("%d\n", cnt);
 
    return 0;
}