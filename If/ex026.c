#include<stdio.h>
main()
{
	int m;
	printf("�������:");
	scanf("%d", &m);
	if (m == 2)
	{
		printf("�ŏI���͂Q�W���ł��B\n");
	}
	else
	{
		if((m == '1') || (m == '3') || (m == '5') || (m == '7') || (m == '8') || (m == '10') || (m == '12'))
		{
			printf("�ŏI���͂R�P���ł�\n");
		}
		else
		{
			printf("�ŏI���͂R�O���ł��B\n");
		}
	}
}