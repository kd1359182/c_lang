#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;

	srand(time(0));
	rand();

	printf("�����o���܂����H\n�i1�F�O�[�@�Q�F�`���L�@�R�F�p�[�j��");
	scanf("%d", &p);

	c = rand() % 3;

	switch (p)
	{
	case 1:
		printf("\n�v���C���[�́A�O�[�ł��B\n");
		break;

	case 2:
		printf("\n�v���C���[�́A�`���L�ł��B\n");
		break;

	case 3:
		printf("\n�v���C���[�́A�p�[�ł��B\n");
	}

	switch (c)
	{
	case 0:
		printf("\n�R���s���[�^�́A�O�[�ł��B\n");
		break;

	case 1:
		printf("\n�R���s���[�^�́A�`���L�ł��B\n");
		break;

	case 2:
		printf("\n�R���s���[�^�́A�p�[�ł��B\n");
	}

	switch (((p-1)  - c + 3) % 3)
	{
	case 0:
		printf("\n�������ł��B\n");
		break;

	case 1:
		printf("\n�R���s���[�^�̏����ł��B\n");
		break;

	case 2:
		printf("\n�v���C���[�̏����ł��B\n");
	}
}