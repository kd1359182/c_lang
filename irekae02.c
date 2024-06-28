#include<stdio.h>
main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("“ü‚ê‘Ö‚¦‘O a=%d b=%d", a, b);

	a = a + b;
	b = b - a;
	b = 0 - b;
	a = a - b;

	printf("“ü‚ê‘Ö‚¦Œã a=%d b=%d", a, b);

}