#include<stdio.h>
main()
{
	int num;

	printf("��������́F");
	scanf("%d", &num);

	if (num >= 10 && num <= 49)
	{
		switch (num / 10)
		{
		case 1:
			printf("10�_��ł�\n");
			break;

		case 2:
			printf("�Q�O�_��ł�\n");
			break;

		case 3:
			printf("�R�O�_��ł�\n");
			break;

		case 4:
			printf("�S�O�_��ł�\n");
			break;
		}
	}
	else
	{
		printf("�G���[�ł��B���͒l�͂P�O����S�X�܂łɂ��Ă�������\n");
	}
}