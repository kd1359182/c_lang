#include<stdio.h>
main()
{
	int num,ret, sum,cnt;

	sum = 0;
	cnt = 0;

	printf("�����F");

	while (ret = scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("�����F");
	}
	printf("���v��%d ���ρ�%.2f", sum, (float)sum / cnt);
}