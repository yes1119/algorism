/*
problem : https://www.acmicpc.net/problem/1316
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int num, length,cnt,word=0;
	scanf("%d", &num);
	
	
	for (int i = 0; i < num; i++)
	{
        cnt=0;
		scanf("%s", str);
		length = strlen(str);
		for (int j = 1; j < length; j++)
		{
			if (str[j] != str[j - 1])
			{
				for (int k = 0; k < j - 1; k++)
				{
					if (str[j] == str[k]) 
					{
						cnt++;
					}
					
				}
			}
		}

		if (cnt == 0)
			word++;		
	}

	printf("%d", word);
	
}