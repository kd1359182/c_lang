#include<stdio.h>
main()
{
	double i,j;

	printf("�Q�̎����H");
	scanf("%lf%lf", &i, &j);

	printf("***%.1f��%.1f�̎l�����Z***\n", i, j);

	printf("�a��%f ", i + j);

	printf("����%f ", i - j);

	printf("�ρ�%f ", i * j);

	printf("����%f ", i / j);
}