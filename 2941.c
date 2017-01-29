/*
problem : https://www.acmicpc.net/problem/2941
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char str[101]={0};
	int cnt = 0,i;

	scanf("%s",str);

	for (i = 0; str[i] != NULL; i++) 
	{
		if (str[i] == '=' || str[i] == '-') 
			str[i] = '0';
		if (str[i] == 'z' && str[i+1] == '=' && str[i-1] == 'd') 
			str[i] = '0';
		if (str[i] == 'j' && (str[i-1] == 'l' || str[i-1] == 'n'))
			str[i] = '0';
	}

	for (i = 0; str[i] != NULL; i++) 
	{
		if (str[i] != '0')
			cnt++;
	
	}

	printf("%d",cnt);
}