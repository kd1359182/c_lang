#include<stdio.h>
#include<string.h>
struct hyouzi
{
	char cose[999];
	char kyouka[999];
	int tanni;
};

main()
{
	struct hyouzi  data;

	printf("コース名：");
	gets(data.cose);

	printf("教科名：");
	scanf("%s", data.kyouka);

	printf("単位数：");
	scanf("%d",&data.tanni );

	printf("コース名：%s\n教科名：%s\n単位数：%d\n", data.cose, data.kyouka, data.tanni);
}