#include<stdio.h>
main()
{
	char a, b;
	int no;
	printf("出席番号を入力してください:");
	scanf("%*5c%d", &no);
	printf("出席番号:%d\n", no);

	printf("入力１:");
	scanf("%*C%c", &a);
	printf("入力１は%c", a);
}