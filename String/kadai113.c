#include<stdio.h>
main()
{
	char date[] = "GameSoft";

	int i, j;

	i = 0;

	while (date[i] != '\0')
	{
		i++;
	}
	printf("������=%s\n", &date[0]);
	printf("������=%d����\n", i);
}