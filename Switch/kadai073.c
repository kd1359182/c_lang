#include<stdio.h>
main()
{
	int num;
	char ch;

	printf("�A���t�@�x�b�g�io or h or d�j?");
	scanf("%c", &ch);

	printf("10�i���̐����H");
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
		printf("�G���[�ł�\n");
	}
}