#include<stdio.h>
main()
{
	char date[80];

	int i,cnt;

	printf("�񐔂ƕ��������� ");
	scanf("%d%s", &cnt, date);

	for (i = 0; i < cnt; i++);
	{
		printf("%s\t", date);
	}
}