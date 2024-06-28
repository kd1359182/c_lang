#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int g;

	srand(time(0));
	g = (rand() % 100) + 1;

	if (g > 50)
	{
		printf("ƒm[ƒ}ƒ‹\n");
	}
	else
	{
		if (20 <=g)
		{
			printf("ƒŒƒA\n");
		}
		else
		{
			if (g <=6)
			{
				printf("UR\n");
			}
			else
			{
				printf("‚k‚q\n");
			}
		}
	}
}