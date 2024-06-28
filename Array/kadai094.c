#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };

	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };

	int c[10],i;

	printf("配列aと配列bを交換すると\n");

	printf("配列a=");

	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");

	for (i = 0; c[i] = a[i]; i++);

	for (i = 0; a[i] = b[i]; i++);

	for (i = 0; b[i] = c[i]; i++);

	printf("配列b=");

	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", b[i]);
	}
	printf("\n");
}