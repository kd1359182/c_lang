#include<stdio.h>
main()
{
	char num;

	printf("アルファベット？");
	scanf("%c", &num);

	switch (num)
	{
	case'a':
	case'A':
		printf("America\nAustralia\n");
		break;

	case'e':
	case'E':
		printf("England\n");
		break;

	case'f':
	case'F':
		printf("France\n");
		break;

	case'j':
	case'J':
		printf("Japan\n");
		break;

	default:
		printf("エラーです");
	}
}