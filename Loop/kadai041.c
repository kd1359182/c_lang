#include<stdio.h>
main()
{
	int d1,d2,sum,i;
	float avg;
	d1 = 0;
	d2 = 0;
	i = 0;
	while (d2 != -999)
	{
		d1 += d2;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &d2);
		i++;
	}

	printf("���v=%d\n", d1);
	printf("����=%.2f\n", avg=d1/i);
}