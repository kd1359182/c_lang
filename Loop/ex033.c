#include<stdio.h>
main()
{
	int num, sum, i;
	printf("���́H");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	for (i = 0,sum=0; num != -999; i++)
	{
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v��%d \t ���ρ�%.2f\n", sum, (float)sum / i);
}