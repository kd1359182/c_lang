#include<stdio.h>
void num(int x, int y,int *z);
main()
{
	int a, b,sum;

	printf("®”‚ğ“ñ‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);

	num(a, b,&sum);
}

void num(int x, int y,int *z)
{
	*z = x+y;
	printf("‡Œv‚Í%d •½‹Ï‚Í%.2f", *z, (float)*z / 2);
}