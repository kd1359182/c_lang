#include<stdio.h>
main()
{
	int cnt;
	printf("��������:");
	scanf("%d", &cnt);
	while (cnt>0)
	{
		printf("*");
		cnt--;
	}
}