#include<stdio.h>
main()
{
	int num, sum, i;
	printf("数は？");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	for (i = 0,sum=0; num != -999; i++)
	{
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計＝%d \t 平均＝%.2f\n", sum, (float)sum / i);
}