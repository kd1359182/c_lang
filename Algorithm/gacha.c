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
		printf("�m�[�}��\n");
	}
	else
	{
		if (20 <=g)
		{
			printf("���A\n");
		}
		else
		{
			if (g <=6)
			{
				printf("UR\n");
			}
			else
			{
				printf("�k�q\n");
			}
		}
	}
}