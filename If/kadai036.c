#include<stdio.h>
main()
{
	int i, j;

	printf("整数1？");
	scanf("%d", &i);

	printf("整数2？");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%dと%dは等しい", i, j);
	}
	else
	{
		if (i < j)
		{
			printf("%dの方が%dより小さい", i, j);
		}
		else
		{
			printf("%dの方が%dより小さい", j, i);
		}
	}
}