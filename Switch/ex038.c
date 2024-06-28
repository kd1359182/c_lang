#include<stdio.h>
main()
{
	int num;

	printf("®”‚ð“ü—ÍF");
	scanf("%d", &num);

	if (num >= 10 && num <= 49)
	{
		switch (num / 10)
		{
		case 1:
			printf("10“_‘ä‚Å‚·\n");
			break;

		case 2:
			printf("‚Q‚O“_‘ä‚Å‚·\n");
			break;

		case 3:
			printf("‚R‚O“_‘ä‚Å‚·\n");
			break;

		case 4:
			printf("‚S‚O“_‘ä‚Å‚·\n");
			break;
		}
	}
	else
	{
		printf("ƒGƒ‰[‚Å‚·B“ü—Í’l‚Í‚P‚O‚©‚ç‚S‚X‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}