#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("”’l‚ğ‹ó”’‚ğŠJ‚¯‚Ä2ŒÂ“ü—ÍF\n");
	ret=scanf("%d%d", &a, &b);

	if (ret == EOF)
	{
		printf("EOF\n");
	}
	else
	{
		printf("%dŒÂ“ü—Í\n", ret);
	}
}