#include<stdio.h>
main()
{
	int cnt;
	printf("数を入れて:");
	scanf("%d", &cnt);
	while (cnt>0)
	{
		printf("*");
		cnt--;
	}
}