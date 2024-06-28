#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;

	srand(time(0));

	for (i = 0; i < 101; i++)
	{
		a = (rand() % 300)+1;

		printf("%4d", a);

		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}