#include<stdio.h>
main()
{
	long int i;

	i = 0;

	printf("整数?:");
	scanf("%ld", &i);

	printf("2倍すると　%d\n", i * 2);

	printf("3倍すると　%d\n", i * 3);

	printf("4倍すると　%d\n", i * 4);
}