#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b, * p_c;

	a = 100;
	b = 200;

	printf("���s�O�Fa=%d\tb=%d\n", a, b);

	p_a = &a;
	p_b = &b;

	c = *p_a;
	*p_a = *p_b;
	*p_b = c;

	printf("���s��Fa=%d\tb=%d\n", a, b);

}