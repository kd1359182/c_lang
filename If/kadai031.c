#include<stdio.h>
main()
{
	float i, j;

	printf("２つの実数？");
	scanf("%f%f", &i, &j);

	if (i < j)
	{
		printf("大きいほうは=%f", j);
	}
	else
	{
		printf("大きいほうは=%f", i);
	}
}