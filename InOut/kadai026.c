#include<stdio.h>
main()
{
	int i;

	printf("10進数の数値？");
	scanf("%d", &i);

	printf("8進数＝%o\t", i);

	printf("16進数＝%x\t", i);
}