#include<stdio.h>
main()
{
	char str[256];
	char *cp;

	printf("文字列を入力してください：");
	cp = gets(str);

	while (cp != NULL)
	{
		printf("入力されたのは：%s\n", cp);
		printf("文字列を入力してください：");
		cp = gets(str);
	}


}