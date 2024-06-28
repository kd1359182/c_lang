#include<stdio.h>
main()
{
	float num, i, sum;

	sum = 0;
	i = -1;

	while (1)
	{
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &num);
		i++;

		if (num < 0)
		{
			continue
		}

		if (num == -999)
		{
			break;
		}

		sum += num;
	}

	printf("‡Œv%d\n•½‹Ï%.3f\n", sum, (float)sum / i);

}