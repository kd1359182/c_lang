#include<stdio.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit data = { "peach",300,5,3,0 };

	printf("¤•i–¼F   %s\n", data.name);

	printf("‰¿ŠiF   %d‰~\n", data.price);

	printf("‚¨‘E‚ß“xF   ");

		for (int i = 0; i < data.point; i++)
		{
			printf("š");
		}
	
	printf("\nŒÂ”F   %dŒÂ\n", data.number);

	printf("‹àŠzF   %d\n",data.price*data.number);

	
}