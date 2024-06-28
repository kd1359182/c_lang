#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int sum,i;

	if (argc >= 3)
	{
		for (sum=0,i = 1; i < argc;i++)
		{
			sum += atoi(argv[i]);
				//printf("%s+%s=%d\n", argv[1], argv[2], sum);
		}
		printf("合計：%d\n", sum);
	}
	else
	{
		printf("二つの因数（整数）を設定して実行してください\n");
	}
}