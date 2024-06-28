#include<stdio.h>
main()
{
	int i;

	printf("０から１００までの整数？");
	scanf("%d", &i);

	if (i>=90&&i<=100)
	{
		printf("その数値の判定結果は「5」です");
	}
	else
	{
		if (i >= 80 && i < 90)
		{
			printf("その数値の判定結果は「4」です");
		}
		else
		{
			if (i >= 50 && i < 80)
			{
				printf("その数値の判定結果は「3」です");
			}
			else
			{
				if (i >= 30 && i < 50)
				{
					printf("その数値の判定結果は「2」です");
				}
				else
				{
					printf("その数値の判定結果は「1」です");
				}
			}
		}
	}
}