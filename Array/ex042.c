#include<stdio.h>
main()
{
	char date[] = "Apple";

	int i;

	printf("1文字ずつ表示\n");

	i = 0;

	while (date[i] != '\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &date[0]);
}