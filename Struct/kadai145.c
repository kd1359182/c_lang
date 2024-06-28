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
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};

	printf("¤•i–¼F   %s\n", data[0].name);

	printf("‰¿ŠiF   %d‰~\n", data[0].price);

	printf("‚¨‘E‚ß“xF   ");

	for (int i = 0; i < data[0].point; i++)
	{
		printf("š");
	}

	printf("\nŒÂ”F   %dŒÂ\n", data[0].number);

	printf("‹àŠzF   %d\n", data[0].price * data[0].number);


	printf("¤•i–¼F   %s\n", data[1].name);

	printf("‰¿ŠiF   %d‰~\n", data[1].price);

	printf("‚¨‘E‚ß“xF   ");

	for (int i = 0; i < data[1].point; i++)
	{
		printf("š");
	}
	printf("™");

	printf("\nŒÂ”F   %dŒÂ\n", data[1].number);

	printf("‹àŠzF   %d\n", data[1].price * data[1].number);

	printf("¤•i–¼F   %s\n", data[2].name);

	printf("‰¿ŠiF   %d‰~\n", data[2].price);

	printf("‚¨‘E‚ß“xF   ");

	for (int i = 0; i < data[2].point; i++)
	{
		printf("š");
	}

	printf("\nŒÂ”F   %dŒÂ\n", data[2].number);

	printf("‹àŠzF   %d\n", data[2].price * data[2].number);

}