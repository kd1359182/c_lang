#include<stdio.h>
main()
{
	int num, i, j;


	printf("���́H ");

	scanf("%d", &num);
    
	i = 0;
	do//���͂����������J��Ԃ�
	{
		j= 0;
		do//�������o�����J��Ԃ�
		{
			printf("*");
			j++;
		} while (j < i + 1);

		printf("\n");
		i++;

	} while (num > i);
}