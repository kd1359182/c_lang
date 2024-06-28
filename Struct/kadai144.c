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
	struct fruit* p;

	p = &data;

	printf("商品名：   %s\n", p->name);

	printf("価格：   %d円\n", p->price);

	printf("お薦め度：   ");

	for (int i = 0; i < p->point; i++)
	{
		printf("★");
	}

	printf("\n個数：   %d個\n", p->number);

	printf("金額：   %d\n", p->price * p->number);

}