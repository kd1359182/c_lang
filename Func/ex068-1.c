#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("���l���󔒂��J����2���́F\n");
	ret=scanf("%d%d", &a, &b);

	if (ret == EOF)
	{
		printf("EOF\n");
	}
	else
	{
		printf("%d����\n", ret);
	}
}