#include<stdio.h>
main()
{
	int i, j;

	printf("����1�H");
	scanf("%d", &i);

	printf("����2�H");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%d��%d�͓�����", i, j);
	}
	else
	{
		if (i < j)
		{
			printf("%d�̕���%d��菬����", i, j);
		}
		else
		{
			printf("%d�̕���%d��菬����", j, i);
		}
	}
}