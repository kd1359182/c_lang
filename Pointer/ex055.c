#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int* p_a,a_sum;
	float b[] = { 11.1,22.2,33.3,44.4 };
    float * p_b,b_sum;

	int i;

	p_a = a;
	p_b = b;

	for (a_sum = 0, i = 0; i < 6; i++)
	{
		a_sum += *p_a;
		p_a++;
	}

	printf("�z��a  ���v=%d\t����=%.3f\n", a_sum, (float)a_sum / i);

    for (b_sum = 0, i = 0; i < 4; i++)
		{
			b_sum += *p_b;
			p_b++;
		}

	printf("�z��b  ���v=%7.3f\t����=%6.3f\n", b_sum, (float)b_sum / i);



}