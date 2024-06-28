#include<stdio.h>
int ch(char a);
main()
{
	char b;
	int ret;

	printf("アルファベット１文字？\n");
	scanf("%c", &b);
	ret = ch(b);

	if (ret==1)
	{
		printf("戻り値は、%dなので入力した文字は、大文字です\n",ret);
	}
	else
	{
		printf("戻り値は、%dなので入力した文字は、小文字です\n",ret);
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