#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,w, target;
	int date[20];

	w = 0;
	target = 0;

	for (i = 0; i < 20; i++)
	{
		date[i] = i + 1;
	}

	printf("\n-------------\n");

	for (i = 0; i < 20; i++)
	{
		printf("date[%2d]=%2d\n", i, date[i]);
	}

	srand(time(0));

	//for (i = 0; i < 20; i++)
	//{
		//target = rand() % 20;
	
	//	w = date[i];
		//date[i] = date[target];
		//date[target] = w;
	//}

	for (i = 19; i > 0; i--)
		{
			target = rand() % i;

			w = date[i];
			date[i] = date[target];
			date[target] = w;
		}

	printf("\n-------------\n");

	for (i = 0; i < 20; i++)
	{
		printf("date[%2d]=%2d\n", i, date[i]);
	}
}