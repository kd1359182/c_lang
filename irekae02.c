#include<stdio.h>
main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("����ւ��O a=%d b=%d", a, b);

	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;

	printf("����ւ��� a=%d b=%d", a, b);

}