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

	printf("���i���F   %s\n", data.name);

	printf("���i�F   %d�~\n", data.price);

	printf("���E�ߓx�F   ");

		for (int i = 0; i < data.point; i++)
		{
			printf("��");
		}
	
	printf("\n���F   %d��\n", data.number);

	printf("���z�F   %d\n",data.price*data.number);

	
}