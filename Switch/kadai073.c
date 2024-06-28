#include<stdio.h>
main()
{
	int num;
	char ch;

	printf("アルファベット（o or h or d）?");
	scanf("%c", &ch);

	printf("10進数の整数？");
	scanf("%d", &num);

	switch (ch)
	{
	case'o':
		printf("%o\n", num);
		break;

	case'h':
		printf("%x\n", num);
		break;

	case'd':
		printf("%d\n", num);
		break;

	default:
		printf("エラーです\n");
	}
}