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
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0} };
	struct fruit* p=data;

	printf("商品名：   %s\n", data->name[0]);

	printf("価格：   %d円\n", p->price[0]);

	printf("お薦め度：   ");

	for (int i = 0; i < p->point[0]; i++)
	{
		printf("★");
	}

	printf("\n個数：   %d個\n", p->number[0]);

	printf("金額：   %d\n", p->price[0] * p->number[0]);


	printf("商品名：   %s\n", p->name[1]);

	printf("価格：   %d円\n", p->price[1]);

	printf("お薦め度：   ");

	for (int i = 0; i < p->point[1]; i++)
	{
		printf("★");
	}
	printf("☆");

	printf("\n個数：   %d個\n", p->number[1]);

	printf("金額：   %d\n", p->price[1] * p->number[1]);

	printf("商品名：   %s\n", p->name[2]);

	printf("価格：   %d円\n", p->price[2]);

	printf("お薦め度：   ");

	for (int i = 0; i < p->point[2]; i++)
	{
		printf("★");
	}

	printf("\n個数：   %d個\n", p->number[2]);

	printf("金額：   %d\n", p->price[2] * p->number[2]);

}