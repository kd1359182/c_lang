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
	struct hyouzi  data = { "�Q�[���\�t�g�P�R�[�X","C����",8 };

	printf("�R�[�X���F%s\n",data.cose);
	printf("���Ȗ��F%s\n", data.kyouka);
	printf("�P�ʐ��F%d\n", data.tanni);
}