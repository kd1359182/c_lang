#include<stdio.h>
main()
{
	int num, sum, i;
	printf("�����i�|�X�X�X�ŏI���j�H");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	
	do
	{
		sum += num;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &num);
		i++;
	} while (num != -999);

	printf("���v��%d\n", sum);

	printf("���ρ�%f\n", (float)sum / i);
}