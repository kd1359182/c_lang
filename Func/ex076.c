#include<stdio.h>
void num(int x, int y,int *z);
main()
{
	int a, b,sum;

	printf("整数を二つ入力：");
	scanf("%d%d", &a, &b);

	num(a, b,&sum);
}

void num(int x, int y,int *z)
{
	*z = x+y;
	printf("合計は%d 平均は%.2f", *z, (float)*z / 2);
}