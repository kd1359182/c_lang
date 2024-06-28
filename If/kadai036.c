#include<stdio.h>
main()
{
	int i, j;

	printf("®”1H");
	scanf("%d", &i);

	printf("®”2H");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢", i, j);
	}
	else
	{
		if (i < j)
		{
			printf("%d‚Ì•û‚ª%d‚æ‚è¬‚³‚¢", i, j);
		}
		else
		{
			printf("%d‚Ì•û‚ª%d‚æ‚è¬‚³‚¢", j, i);
		}
	}
}