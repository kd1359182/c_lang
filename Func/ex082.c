#include<stdio.h>
#include<string.h>
void sort(int* array, int size, int order);
int main(void)
{
	int date[8] = { 6,10,8,2,9,5,1,7 };
	int i;
	char str[999];

	printf("�\�[�g��������́F");
	gets(str);

	if (strcmp(str, "����") == 0)
	{
		sort(date, 8, 0);
	}
	else

		if (strcmp(str,"�~��") == 0)
		{
			sort(date, 8, 1);
		}
		else
		{
			printf("�\�[�g�����́A�������~���œ��͂��Ă�������\n");
			return 1;
		}

	for (i = 0; i < 8; i++)
	{
		printf("%d ", date[i]);
	}

	return 0;
}

void sort(int* array, int size, int order)
{
	int i, j, w;

	switch (order)
	{
	case 0:
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(array + 1) > *(array + j))
				{
					w = *(array + 1);
					*(array + 1) = *(array + j);
					*(array + j) = w;
				}
			}
		}
		break;

	case 1:
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(array + 1) > *(array + j))
				{
					w = *(array + 1);
					*(array + 1) = *(array + j);
					*(array + j) = w;
				}
			}
		}
		break;
	}

}