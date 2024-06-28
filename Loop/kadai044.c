#include<stdio.h>
main()
{
	int i, j;

	i = 0;

	while (i != -999)
	{
		printf("整数（ー999で入力終了）？");
		scanf("%d", &i);

		printf("8進数＝%o\t", i);
		printf("16進数＝%x\n", i);
	}
}