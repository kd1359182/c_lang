#include<stdio.h>
main()
{
	int num, i, j;


	printf("数は？ ");

	scanf("%d", &num);
    
	i = 0;
	do//入力した分だけ繰り返す
	{
		j= 0;
		do//＊を何個出すか繰り返す
		{
			printf("*");
			j++;
		} while (j < i + 1);

		printf("\n");
		i++;

	} while (num > i);
}