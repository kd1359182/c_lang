#include<stdio.h>
main()
{
	int num, i;
	printf("数を入れて：");
	scanf("%d", &num);
	i = 1;
	while(i<=5)
	{
		printf("%d ", num * i);
		i++;
	}
}