#include<stdio.h>
main()
{
	int i,j;

	for (i = 0, j = 0; i < 20; i++, j++)
	{
		if (j % 2 != 0)
		{
			printf("%d ", j);
			continue;
		}
	}
}