/*
problem : https://www.acmicpc.net/problem/1924
*/

int main()
{
	int x, y,count=0;
	scanf("%d %d", &x, &y);

	char date[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d %d", &x, &y);
	for (int i = 1; i < x; i++)
		count += date[i - 1];


	count += y;
	count %= 7;

	if (count == 0) printf("SUN");
	else if (count == 1) printf("MON");
	else if (count == 2) printf("TUE");
	else if (count == 3) printf("WED");
	else if (count == 4) printf("THU");
	else if (count == 5) printf("FRI");
	else if (count == 6)printf("SAT");

	return 0;
}