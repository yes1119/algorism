/*
problem : https://www.acmicpc.net/problem/1157
*/

#include <stdio.h>
#include <string.h>

int main()
{

	char str[1000001] = " ";
	int temp[26] = { 0,};
	int index=0,big = 0,count=0,length;

	scanf("%s", str);
	length = strlen(str);

	for (int i = 0; i < length; i++)
	{	
		if (str[i] < 97)
			temp[str[i] - 65]++;
		else
			temp[str[i] - 97]++;		
	}

	for (int i = 0; i < 26; i++)
	{
		if (temp[i] > big)
		{
			big = temp[i];
			index = i;
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		if (temp[i] == big)
		{
			count++;
			if (count >= 2)
			{
				printf("?");
				return 0;
			}
		}
	}

	printf("%c", index + 65);
	return 0;
}