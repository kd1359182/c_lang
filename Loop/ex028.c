#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	//printf("��������:");
	//scanf("%d", &ia);
	ia = 0;
	while(ia != -999)
	{
		gokei += ia;
		printf("��������:");
		scanf("%d", &ia);
	}
	printf("���v��%d\n", gokei);
}