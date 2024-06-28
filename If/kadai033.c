#include<stdio.h>
main()
{
	char i;

	printf("アルファベット？");
	scanf("%c", &i);

	if (i >= 'A' && i <= 'Z')
	{
		printf("大文字です\n");
	}
	else
	{
		if (i >= 'a' && i <= 'z')
		{
			printf("小文字です\n");
		}
		else
		{
			printf("その他の文字です\n");
		}
	}
}