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
	printf("文字列=%s\n", &date[0]);
	printf("文字数=%d文字\n", i);
}