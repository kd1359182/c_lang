#include<stdio.h>
int ch(char a);
main()
{
	char b;
	int ret;

	printf("�A���t�@�x�b�g�P�����H\n");
	scanf("%c", &b);
	ret = ch(b);

	if (ret==1)
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�啶���ł�\n",ret);
	}
	else
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�������ł�\n",ret);
	}
}

int ch(char a)
{
	if (a >= 0x41 && a <= 0x5A)
	{
		return(1);
	}
	else
	{
		if (a >= 0x61 && a <= 0x7A)
		{
			return(0);
		}
	}
}