#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int * p_a, * p_b, * c;

	a = 100;
	b = 200;

	p_a = &a;
	p_b = &b;

	printf("���s�O�F* p_a=%d\t* p_b=%d\n", *p_a, *p_b);

	*c= *p_a;
	*p_a = *p_b;
	*p_b = *c;

	printf("���s��F* p_a=%d\t* p_b=%d\n", *p_a, *p_b);

}