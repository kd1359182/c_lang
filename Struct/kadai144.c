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

	printf("���i���F   %s\n", p->name);

	printf("���i�F   %d�~\n", p->price);

	printf("���E�ߓx�F   ");

	for (int i = 0; i < p->point; i++)
	{
		printf("��");
	}

	printf("\n���F   %d��\n", p->number);

	printf("���z�F   %d\n", p->price * p->number);

}