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

	printf("���i���F   %s\n", data->name[0]);

	printf("���i�F   %d�~\n", p->price[0]);

	printf("���E�ߓx�F   ");

	for (int i = 0; i < p->point[0]; i++)
	{
		printf("��");
	}

	printf("\n���F   %d��\n", p->number[0]);

	printf("���z�F   %d\n", p->price[0] * p->number[0]);


	printf("���i���F   %s\n", p->name[1]);

	printf("���i�F   %d�~\n", p->price[1]);

	printf("���E�ߓx�F   ");

	for (int i = 0; i < p->point[1]; i++)
	{
		printf("��");
	}
	printf("��");

	printf("\n���F   %d��\n", p->number[1]);

	printf("���z�F   %d\n", p->price[1] * p->number[1]);

	printf("���i���F   %s\n", p->name[2]);

	printf("���i�F   %d�~\n", p->price[2]);

	printf("���E�ߓx�F   ");

	for (int i = 0; i < p->point[2]; i++)
	{
		printf("��");
	}

	printf("\n���F   %d��\n", p->number[2]);

	printf("���z�F   %d\n", p->price[2] * p->number[2]);

}