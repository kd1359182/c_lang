#include<stdio.h>
main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("入れ替え前 a=%d b=%d", a, b);

	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;

	printf("入れ替え後 a=%d b=%d", a, b);

}