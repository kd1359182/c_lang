#include<stdio.h>
main()
{
	int cnt, i;
	printf("数を入れて:");
	scanf("%d", &cnt);
	i = 0;
	while (i < cnt)
	{
		printf("*");
		i++;
	}
}