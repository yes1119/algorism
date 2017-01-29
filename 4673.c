/*
problem : https://www.acmicpc.net/problem/4673
*/

#include <stdio.h>
int self(int i) 
{
	int res = i;

	if (i >= 10000) { res += i / 10000; i %= 10000; }
	if (i >= 1000) { res += i / 1000; i %= 1000; }
	if (i >= 100) { res += i / 100; i %= 100; }
	if (i >= 10) { res += i / 10; i %= 10; }


	return res += i;
}

int main() 
{
	int arr[10001] = {0};
	int num=0;

	for (int i = 1; i <= 10000; i++) 
	{
		num = self(i);
		if (num <= 10000) arr[num] = 1;
		
		if (!arr[i]) 
			printf("%d\n", i);
	}

    return 0;
}
