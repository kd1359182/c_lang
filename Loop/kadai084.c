#include<stdio.h>
main()
{
	int num,lim, i, sum;

	sum = 0;
	i = -1;

	while (1)
	{
		printf("®”1i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}

		if (num <= 0)
		{
			continue;
		}

		printf("®”2i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &lim);

		if (lim == -999)
		{
			break;
		}

		if (lim <= 0)
		{
			continue;
		}

		printf("%d / %d = %d ‚ ‚Ü‚è %d\n", num, lim, num / lim, num % lim);

	}
}