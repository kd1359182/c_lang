#include<stdio.h>
void num(int x, int y, int z,int *max,int *min);
main()
{
	int a, b, c,max,min;

	printf("������3���́F");
	scanf("%d%d%d", &a, &b,&c);

	num(a, b,c,&max,&min);

	printf("�ő�l��%d   �ŏ��l��%d\n", max, min);
}

void num(int x, int y, int z,int *max,int *min)
{
	*max = x;

	if (y > *max)
	{
		*max = y;
	}

	if (z > *max)
	{
		*max = z;
	}

	*min = x;

	if (y < *min)
	{
		*min = y;
	}

	if (z < *min)
	{
		*min = z;
	}

	//if (x > y)
	//{
	//	if (x > z)
	//	{
	//		//printf("�ő�l��%d�ł�\n", x);
	//		*max = x;
	//	}
	//	else
	//	{
	//		//printf("�ő�l��%d�ł�\n", z);
	//		*max = z;
	//	}
	//}
	//else
	//{
	//	if (y > z)
	//	{
	//		//printf("�ő�l��%d�ł�\n", y);
	//		*max = y;
	//	}
	//	else
	//	{
	//		//printf("�ő�l��%d�ł�\n", z);
	//		*max = z;
	//	}
	//}

	//	if (x < y)
	//	{
	//		if (x < z)
	//		{
	//			//printf("�ŏ��l��%d�ł�\n", x);
	//			*min = x;
	//		}
	//		else
	//		{
	//			//printf("�ŏ��l��%d�ł�\n", z);
	//			*min = z;
	//		}
	//	}
	//	else
	//	{
	//		if (y < z)
	//		{
	//			//printf("�ŏ��l��%d�ł�\n", y);
	//			*min = y;
	//		}
	//		else
	//		{
	//			//printf("�ŏ��l��%d�ł�\n", z);
	//			*min = z;
	//		}
	//	}
}