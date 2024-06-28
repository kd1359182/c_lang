#include<stdio.h>
main()
{
	int i,j;

	printf("®”H");
	scanf("%d", &i);

	for (j = 0; j < 11; j++)
	{
		printf("%d ", i + j);
	}
}