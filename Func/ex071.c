#include<stdio.h>
int ans(int a, int b,int c);
float heikin(int, int, int);
main()
{
	int a, b, c;

	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b,&c);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f‚Å‚·\n", ans(a, b, c), heikin(a, b, c));
}

int ans(int a, int b, int c)
{
	return a + b + c;
}
float heikin(int a,int b,int c)
{
	return(float)ans(a, b, c) / 3;
}