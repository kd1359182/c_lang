#include<stdio.h>
main()
{
	int i, j;

	float sum, x[3][2];

	for (i = 0; i < 3; i++)
	{
		for (sum = 0, j = 0; j < 2; j++)
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			sum += x[i][j];
		}
		printf("%d�s�ڂ̕��ρ�%.2f\n\n", i, sum / 2);
	}

}