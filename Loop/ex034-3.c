#include<stdio.h>
main()
{
	int num, i, j;


	printf("”‚ÍH ");

	scanf("%d", &num);
    
	i = 0;
	do//“ü—Í‚µ‚½•ª‚¾‚¯ŒJ‚è•Ô‚·
	{
		j= 0;
		do//–‚ğ‰½ŒÂo‚·‚©ŒJ‚è•Ô‚·
		{
			printf("*");
			j++;
		} while (j < i + 1);

		printf("\n");
		i++;

	} while (num > i);
}