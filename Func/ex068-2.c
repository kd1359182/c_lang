#include<stdio.h>
main()
{
	char str[256];
	char *cp;

	printf("���������͂��Ă��������F");
	cp = gets(str);

	while (cp != NULL)
	{
		printf("���͂��ꂽ�̂́F%s\n", cp);
		printf("���������͂��Ă��������F");
		cp = gets(str);
	}


}