#include<stdio.h>
main()
{
	int num, sum, i;
	printf("®”i|‚X‚X‚X‚ÅI—¹jH");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	
	do
	{
		sum += num;
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &num);
		i++;
	} while (num != -999);

	printf("‡Œv%d\n", sum);

	printf("•½‹Ï%f\n", (float)sum / i);
}