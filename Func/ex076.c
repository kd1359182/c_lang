#include<stdio.h>
void num(int x, int y,int *z);
main()
{
	int a, b,sum;

	printf("���������́F");
	scanf("%d%d", &a, &b);

	num(a, b,&sum);
}

void num(int x, int y,int *z)
{
	*z = x+y;
	printf("���v��%d ���ς�%.2f", *z, (float)*z / 2);
}