#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("数値を空白を開けて2個入力：\n");
	ret=scanf("%d%d", &a, &b);

	if (ret == EOF)
	{
		printf("EOF\n");
	}
	else
	{
		printf("%d個入力\n", ret);
	}
}