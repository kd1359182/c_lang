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

	printf("�R�[�X���F");
	gets(data.cose);

	printf("���Ȗ��F");
	scanf("%s", data.kyouka);

	printf("�P�ʐ��F");
	scanf("%d",&data.tanni );

	printf("�R�[�X���F%s\n���Ȗ��F%s\n�P�ʐ��F%d\n", data.cose, data.kyouka, data.tanni);
}