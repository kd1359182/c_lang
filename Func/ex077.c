#include<stdio.h>
void num(int x, int y, int z,int *max,int *min);
main()
{
	int a, b, c,max,min;

	printf("整数を3つ入力：");
	scanf("%d%d%d", &a, &b,&c);

	num(a, b,c,&max,&min);

	printf("最大値＝%d   最小値＝%d\n", max, min);
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
	//		//printf("最大値は%dです\n", x);
	//		*max = x;
	//	}
	//	else
	//	{
	//		//printf("最大値は%dです\n", z);
	//		*max = z;
	//	}
	//}
	//else
	//{
	//	if (y > z)
	//	{
	//		//printf("最大値は%dです\n", y);
	//		*max = y;
	//	}
	//	else
	//	{
	//		//printf("最大値は%dです\n", z);
	//		*max = z;
	//	}
	//}

	//	if (x < y)
	//	{
	//		if (x < z)
	//		{
	//			//printf("最小値は%dです\n", x);
	//			*min = x;
	//		}
	//		else
	//		{
	//			//printf("最小値は%dです\n", z);
	//			*min = z;
	//		}
	//	}
	//	else
	//	{
	//		if (y < z)
	//		{
	//			//printf("最小値は%dです\n", y);
	//			*min = y;
	//		}
	//		else
	//		{
	//			//printf("最小値は%dです\n", z);
	//			*min = z;
	//		}
	//	}
}